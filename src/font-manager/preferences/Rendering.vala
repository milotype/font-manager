/* Rendering.vala
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

    internal struct PreviousRenderingSettings {

        int hintstyle;
        bool antialias;
        bool hinting;
        bool autohint;
        bool bitmaps;

        public PreviousRenderingSettings (FontProperties properties) {
            hintstyle = properties.hintstyle;
            antialias = properties.antialias;
            hinting = properties.hinting;
            autohint = properties.autohint;
            bitmaps = properties.embeddedbitmap;
        }

        public bool changed (FontProperties properties) {
            return properties.hintstyle != hintstyle ||
                   properties.antialias != antialias ||
                   properties.hinting != hinting ||
                   properties.autohint != autohint ||
                   properties.embeddedbitmap != bitmaps;
        }

        public void load (FontProperties properties) {
            properties.set("hintstyle", hintstyle, "antialias", antialias,
                           "hinting", hinting, "autohint", autohint,
                           "embeddedbitmap", bitmaps);
            return;
        }

    }

    public class RenderingPreferences : PreferenceList {

        public FontProperties properties { get; private set; }

        bool initialized = false;
        Gtk.CheckButton hinter;
        Gtk.DropDown hintstyle;
        Gtk.Switch antialias;
        Gtk.Switch hinting;
        Gtk.Switch bitmaps;
        PreviousRenderingSettings settings;

        public RenderingPreferences () {
            widget_set_name(this, "FontManagerRenderingPreferences");
            list.set_selection_mode(Gtk.SelectionMode.NONE);
            properties = new FontProperties() { target_file = "19-DefaultProperties.conf" };
        }

        void generate_options_list () {
            if (initialized)
                return;
            antialias = add_preference_switch(_("Antialias"));
            hinting = add_preference_switch(_("Hinting"));
            var widget = hinting.get_ancestor(typeof(PreferenceRow)) as PreferenceRow;
            hinter = new Gtk.CheckButton();
            var child = new PreferenceRow(_("Enable Autohinter"), null, null, hinter);
            widget.append_child(child);
            var hintstyles = new GLib.Array <string> ();
            for (int i = 0; i <= HintStyle.FULL; i++)
                hintstyles.append_val(((HintStyle) i).to_string());
            var hintstyle_list = new Gtk.StringList(hintstyles.data);
            hintstyle = new Gtk.DropDown(hintstyle_list, null);
            child = new PreferenceRow(_("Hinting Style"), null, null, hintstyle);
            widget.append_child(child);
            bitmaps = add_preference_switch(_("Use Embedded Bitmaps"));
            bind_properties();
            // Store previous settings
            settings = PreviousRenderingSettings(properties);
            var footer = new FontconfigFooter();
            footer.reset_requested.connect(on_reset);
            append(footer);
            initialized = true;
            return;
        }

        void bind_properties () {
            BindingFlags flags = BindingFlags.BIDIRECTIONAL | BindingFlags.SYNC_CREATE;
            properties.bind_property("antialias", antialias, "active", flags);
            properties.bind_property("hinting", hinting, "active", flags);
            properties.bind_property("autohint", hinter, "active", flags);
            properties.bind_property("embeddedbitmap", bitmaps, "active", flags);
            properties.bind_property("hintstyle", hintstyle, "selected", flags);
            return;
        }

        void on_reset () {
            properties.discard();
            settings.load(properties);
            return;
        }

        protected override void on_map () {
            generate_options_list();
            properties.load();
            return;
        }

        protected override void on_unmap () {
            // Avoid saving unless there's been changes to at least one value.
            if (settings.changed(properties))
                properties.save();
            return;
        }

    }

}

