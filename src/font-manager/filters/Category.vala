/* Category.vala
 *
 * Copyright (C) 2009-2024 Jerry Casiano
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.
 *
 * If not, see <http://www.gnu.org/licenses/gpl-3.0.txt>.
*/

namespace FontManager {

    public class Category : FontListFilter {

        public string? sql { get; set; default = null; }
        public StringSet families { get; set; default = new StringSet(); }
        public StringSet variations { get; set; default = new StringSet(); }

        public bool update_required { get; set; default = true; }

        public GenericArray <Category> children { get; set; default = new GenericArray <Category> (); }

        public override int size {
            get {
                return ((int) families.size);
            }
        }

        public Category (string name, string comment, string icon, string? sql, int index) {
            Object(name: name, icon: icon, comment: comment, sql: sql, index: index);
        }

        public override async void update () {
            if (!update_required)
                return;
            families.clear();
            variations.clear();
            try {
                if (sql != null) {
                    Database db = DatabaseProxy.get_default_db();
                    get_matching_families_and_fonts(db, families, variations, sql);
                }
                for (int i = 0; i < children.length; i++)
                    yield children[i].update();
            } catch (Error e) {
                warning(e.message);
            }
            update_required = false;
            changed();
            return;
        }

        public override bool matches (Object? item) {
            if (sql == null)
                return true;
            bool visible = false;
            if (item is Family)
                visible = (((Family) item).family in families);
            else if (item is Font)
                visible = (((Font) item).description in variations);
            return visible;
        }

        public override bool deserialize_property (string prop_name,
                                                   out Value val,
                                                   ParamSpec pspec,
                                                   Json.Node node) {
            val = Value(pspec.value_type);
            if (pspec.value_type == typeof(GenericArray)) {
                GenericArray <Category> res = new GenericArray <Category> ();
                node.get_object().foreach_member((obj, name, node) => {
                    Object child = Json.gobject_deserialize(typeof(Category), node);
                    res.add((Category) child);
                });
                val.set_boxed(res);
                return true;
            } else if (pspec.value_type == typeof(StringSet)) {
                var res = new StringSet();
                val.set_object(res);
                return true;
            } else {
                return base.deserialize_property(prop_name, out val, pspec, node);
            }
        }

        public override Json.Node serialize_property (string prop_name,
                                                      Value val,
                                                      ParamSpec pspec) {
            if (pspec.value_type == typeof(GenericArray)) {
                var node = new Json.Node(Json.NodeType.OBJECT);
                var obj = new Json.Object();
                children.foreach((child) => {
                    obj.set_member(child.name.escape(""), Json.gobject_serialize(child));
                });
                node.set_object(obj);
                return node;
            } else if (pspec.value_type == typeof(StringSet)) {
                var node = new Json.Node(Json.NodeType.ARRAY);
                var arr = new Json.Array();
                node.set_array(arr);
                return node;
            } else {
                return base.serialize_property(prop_name, val, pspec);
            }
        }

    }

}

