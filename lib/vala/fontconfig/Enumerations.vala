/* Enumerations.vala
 *
 * Copyright (C) 2009 - 2019 Jerry Casiano
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

    public enum Width {

        ULTRACONDENSED = 50,
        EXTRACONDENSED = 63,
        CONDENSED = 75,
        SEMICONDENSED = 87,
        NORMAL = 100,
        SEMIEXPANDED = 113,
        EXPANDED = 125,
        EXTRAEXPANDED = 150,
        ULTRAEXPANDED = 200;

        public string? to_string () {
            switch (this) {
                case ULTRACONDENSED:
                    return _("Ultra-Condensed");
                case EXTRACONDENSED:
                    return _("Extra-Condensed");
                case CONDENSED:
                    return _("Condensed");
                case SEMICONDENSED:
                    return _("Semi-Condensed");
                case SEMIEXPANDED:
                    return _("Semi-Expanded");
                case EXPANDED:
                    return _("Expanded");
                case EXTRAEXPANDED:
                    return _("Extra-Expanded");
                case ULTRAEXPANDED:
                    return _("Ultra-Expanded");
                default:
                    return null;
            }
        }

    }

    public enum Slant {

        ROMAN = 0,
        ITALIC = 100,
        OBLIQUE = 110;

        public string? to_string () {
            switch (this) {
                case ITALIC:
                    return _("Italic");
                case OBLIQUE:
                    return _("Oblique");
                default:
                    return null;
            }
        }

    }

    public enum Weight {

        THIN = 0,
        EXTRALIGHT = 40,
        ULTRALIGHT = 40,
        LIGHT = 50,
        BOOK = 75,
        REGULAR = 80,
        NORMAL = 80,
        MEDIUM = 100,
        DEMIBOLD = 180,
        SEMIBOLD = 180,
        BOLD = 200,
        EXTRABOLD = 205,
        BLACK = 210,
        HEAVY = 210,
        EXTRABLACK = 215,
        ULTRABLACK = 215;

        public bool defined () {
            bool res;
            switch (this) {
                case THIN:
                case ULTRALIGHT:
                case LIGHT:
                case BOOK:
                case REGULAR:
                case MEDIUM:
                case SEMIBOLD:
                case BOLD:
                case EXTRABOLD:
                case BLACK:
                case ULTRABLACK:
                    res = true;
                    break;
                default:
                    res = false;
                    break;
            }
            return res;
        }

        public string? to_string () {
            switch (this) {
                case THIN:
                    return _("Thin");
                case ULTRALIGHT:
                    return _("Ultra-Light");
                case LIGHT:
                    return _("Light");
                case BOOK:
                    return _("Book");
                case MEDIUM:
                    return _("Medium");
                case SEMIBOLD:
                    return _("Semi-Bold");
                case BOLD:
                    return _("Bold");
                case EXTRABOLD:
                    return _("Ultra-Bold");
                case HEAVY:
                    return _("Heavy");
                case ULTRABLACK:
                    return _("Ultra-Heavy");
                default:
                    return null;
            }
        }

    }

    public enum Spacing {

        PROPORTIONAL = 0,
        DUAL = 90,
        MONO = 100,
        CHARCELL = 110;

        public string? to_string () {
            switch (this) {
                case PROPORTIONAL:
                    return _("Proportional");
                case DUAL:
                    return _("Dual Width");
                case MONO:
                    return _("Monospace");
                case CHARCELL:
                    return _("Charcell");
                default:
                    return null;
            }
        }

    }

    public enum HintStyle {

        NONE,
        SLIGHT,
        MEDIUM,
        FULL;

        public string to_string () {
            switch (this) {
                case SLIGHT:
                    return _("Slight");
                case MEDIUM:
                    return _("Medium");
                case FULL:
                    return _("Full");
                default:
                    return _("None");
            }
        }

    }

    public enum LCDFilter {

        NONE,
        DEFAULT,
        LIGHT,
        LEGACY;

        public string to_string () {
            switch (this) {
                case DEFAULT:
                    return _("Default");
                case LIGHT:
                    return _("Light");
                case LEGACY:
                    return _("Legacy");
                default:
                    return _("None");
            }
        }

    }

    public enum SubpixelOrder {

        UNKNOWN,
        RGB,
        BGR,
        VRGB,
        VBGR,
        NONE;

        public string to_string () {
            switch (this) {
                case UNKNOWN:
                    return _("Unknown");
                case RGB:
                    return _("RGB");
                case BGR:
                    return _("BGR");
                case VRGB:
                    return _("VRGB");
                case VBGR:
                    return _("VBGR");
                default:
                    return _("None");
            }
        }

    }

}
