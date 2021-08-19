/* font-manager-regional-indicator-symbols.h
 *
 * Copyright (C) 2021 Jerry Casiano
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

#ifndef __FONT_MANAGER_REGIONAL_INDICATOR_SYMBOLS_H__
#define __FONT_MANAGER_REGIONAL_INDICATOR_SYMBOLS_H__

#include <glib.h>
#include <glib/gi18n-lib.h>

G_BEGIN_DECLS

#define FONT_MANAGER_RIS_START_POINT 127462
#define FONT_MANAGER_RIS_END_POINT 127487

static const struct
{
    gunichar code1;
    gunichar code2;
    const gchar *region;
}
FontManagerRIS [] =
{
    { 127462, 127464, "AC ‐ Ascension Island" },
    { 127462, 127465, "AD ‐ Andorra" },
    { 127462, 127466, "AE ‐ United Arab Emirates" },
    { 127462, 127467, "AF ‐ Afghanistan" },
    { 127462, 127468, "AG ‐ Antigua & Barbuda" },
    { 127462, 127470, "AI ‐ Anguilla" },
    { 127462, 127473, "AL ‐ Albania" },
    { 127462, 127474, "AM ‐ Armenia" },
    { 127462, 127476, "AO ‐ Angola" },
    { 127462, 127478, "AQ ‐ Antarctica" },
    { 127462, 127479, "AR ‐ Argentina" },
    { 127462, 127480, "AS ‐ American Samoa" },
    { 127462, 127481, "AT ‐ Austria" },
    { 127462, 127482, "AU ‐ Australia" },
    { 127462, 127484, "AW ‐ Aruba" },
    { 127462, 127485, "AX ‐ Åland Islands" },
    { 127462, 127487, "AZ ‐ Azerbaijan" },
    { 127463, 127462, "BA ‐ Bosnia & Herzegovina" },
    { 127463, 127463, "BB ‐ Barbados" },
    { 127463, 127465, "BD ‐ Bangladesh" },
    { 127463, 127466, "BE ‐ Belgium" },
    { 127463, 127467, "BF ‐ Burkina Faso" },
    { 127463, 127468, "BG ‐ Bulgaria" },
    { 127463, 127469, "BH ‐ Bahrain" },
    { 127463, 127470, "BI ‐ Burundi" },
    { 127463, 127471, "BJ ‐ Benin" },
    { 127463, 127473, "BL ‐ St. Barthélemy" },
    { 127463, 127474, "BM ‐ Bermuda" },
    { 127463, 127475, "BN ‐ Brunei" },
    { 127463, 127476, "BO ‐ Bolivia" },
    { 127463, 127478, "BQ ‐ Caribbean Netherlands" },
    { 127463, 127479, "BR ‐ Brazil" },
    { 127463, 127480, "BS ‐ Bahamas" },
    { 127463, 127481, "BT ‐ Bhutan" },
    { 127463, 127483, "BV ‐ Bouvet Island" },
    { 127463, 127484, "BW ‐ Botswana" },
    { 127463, 127486, "BY ‐ Belarus" },
    { 127463, 127487, "BZ ‐ Belize" },
    { 127464, 127462, "CA ‐ Canada" },
    { 127464, 127464, "CC ‐ Cocos (Keeling) Islands" },
    { 127464, 127465, "CD ‐ Congo - Kinshasa" },
    { 127464, 127467, "CF ‐ Central African Republic" },
    { 127464, 127468, "CG ‐ Congo - Brazzaville" },
    { 127464, 127469, "CH ‐ Switzerland" },
    { 127464, 127470, "CI ‐ Côte d'Ivoire" },
    { 127464, 127472, "CK ‐ Cook Islands" },
    { 127464, 127473, "CL ‐ Chile" },
    { 127464, 127474, "CM ‐ Cameroon" },
    { 127464, 127475, "CN ‐ China" },
    { 127464, 127476, "CO ‐ Colombia" },
    { 127464, 127477, "CP ‐ Clipperton Island" },
    { 127464, 127479, "CR ‐ Costa Rica" },
    { 127464, 127482, "CU ‐ Cuba" },
    { 127464, 127483, "CV ‐ Cape Verde" },
    { 127464, 127484, "CW ‐ Curaçao" },
    { 127464, 127485, "CX ‐ Christmas Island" },
    { 127464, 127486, "CY ‐ Cyprus" },
    { 127464, 127487, "CZ ‐ Czechia" },
    { 127465, 127466, "DE ‐ Germany" },
    { 127465, 127468, "DG ‐ Diego Garcia" },
    { 127465, 127471, "DJ ‐ Djibouti" },
    { 127465, 127472, "DK ‐ Denmark" },
    { 127465, 127474, "DM ‐ Dominica" },
    { 127465, 127476, "DO ‐ Dominican Republic" },
    { 127465, 127487, "DZ ‐ Algeria" },
    { 127466, 127462, "EA ‐ Ceuta & Melilla" },
    { 127466, 127464, "EC ‐ Ecuador" },
    { 127466, 127466, "EE ‐ Estonia" },
    { 127466, 127468, "EG ‐ Egypt" },
    { 127466, 127469, "EH ‐ Western Sahara" },
    { 127466, 127479, "ER ‐ Eritrea" },
    { 127466, 127480, "ES ‐ Spain" },
    { 127466, 127481, "ET ‐ Ethiopia" },
    { 127466, 127482, "EU ‐ European Union" },
    { 127467, 127470, "FI ‐ Finland" },
    { 127467, 127471, "FJ ‐ Fiji" },
    { 127467, 127472, "FK ‐ Falkland Islands" },
    { 127467, 127474, "FM ‐ Micronesia" },
    { 127467, 127476, "FO ‐ Faroe Islands" },
    { 127467, 127479, "FR ‐ France" },
    { 127468, 127462, "GA ‐ Gabon" },
    { 127468, 127463, "GB ‐ United Kingdom" },
    { 127468, 127465, "GD ‐ Grenada" },
    { 127468, 127466, "GE ‐ Georgia" },
    { 127468, 127467, "GF ‐ French Guiana" },
    { 127468, 127468, "GG ‐ Guernsey" },
    { 127468, 127469, "GH ‐ Ghana" },
    { 127468, 127470, "GI ‐ Gibraltar" },
    { 127468, 127473, "GL ‐ Greenland" },
    { 127468, 127474, "GM ‐ Gambia" },
    { 127468, 127475, "GN ‐ Guinea" },
    { 127468, 127477, "GP ‐ Guadeloupe" },
    { 127468, 127478, "GQ ‐ Equatorial Guinea" },
    { 127468, 127479, "GR ‐ Greece" },
    { 127468, 127480, "GS ‐ South Georgia & South Sandwich Islands" },
    { 127468, 127481, "GT ‐ Guatemala" },
    { 127468, 127482, "GU ‐ Guam" },
    { 127468, 127484, "GW ‐ Guinea-Bissau" },
    { 127468, 127486, "GY ‐ Guyana" },
    { 127469, 127472, "HK ‐ Hong Kong SAR China" },
    { 127469, 127474, "HM ‐ Heard & McDonald Islands" },
    { 127469, 127475, "HN ‐ Honduras" },
    { 127469, 127479, "HR ‐ Croatia" },
    { 127469, 127481, "HT ‐ Haiti" },
    { 127469, 127482, "HU ‐ Hungary" },
    { 127470, 127464, "IC ‐ Canary Islands" },
    { 127470, 127465, "ID ‐ Indonesia" },
    { 127470, 127466, "IE ‐ Ireland" },
    { 127470, 127473, "IL ‐ Israel" },
    { 127470, 127474, "IM ‐ Isle of Man" },
    { 127470, 127475, "IN ‐ India" },
    { 127470, 127476, "IO ‐ British Indian Ocean Territory" },
    { 127470, 127478, "IQ ‐ Iraq" },
    { 127470, 127479, "IR ‐ Iran" },
    { 127470, 127480, "IS ‐ Iceland" },
    { 127470, 127481, "IT ‐ Italy" },
    { 127471, 127466, "JE ‐ Jersey" },
    { 127471, 127474, "JM ‐ Jamaica" },
    { 127471, 127476, "JO ‐ Jordan" },
    { 127471, 127477, "JP ‐ Japan" },
    { 127472, 127466, "KE ‐ Kenya" },
    { 127472, 127468, "KG ‐ Kyrgyzstan" },
    { 127472, 127469, "KH ‐ Cambodia" },
    { 127472, 127470, "KI ‐ Kiribati" },
    { 127472, 127474, "KM ‐ Comoros" },
    { 127472, 127475, "KN ‐ St. Kitts & Nevis" },
    { 127472, 127477, "KP ‐ North Korea" },
    { 127472, 127479, "KR ‐ South Korea" },
    { 127472, 127484, "KW ‐ Kuwait" },
    { 127472, 127486, "KY ‐ Cayman Islands" },
    { 127472, 127487, "KZ ‐ Kazakhstan" },
    { 127473, 127462, "LA ‐ Laos" },
    { 127473, 127463, "LB ‐ Lebanon" },
    { 127473, 127464, "LC ‐ St. Lucia" },
    { 127473, 127470, "LI ‐ Liechtenstein" },
    { 127473, 127472, "LK ‐ Sri Lanka" },
    { 127473, 127479, "LR ‐ Liberia" },
    { 127473, 127480, "LS ‐ Lesotho" },
    { 127473, 127481, "LT ‐ Lithuania" },
    { 127473, 127482, "LU ‐ Luxembourg" },
    { 127473, 127483, "LV ‐ Latvia" },
    { 127473, 127486, "LY ‐ Libya" },
    { 127474, 127462, "MA ‐ Morocco" },
    { 127474, 127464, "MC ‐ Monaco" },
    { 127474, 127465, "MD ‐ Moldova" },
    { 127474, 127466, "ME ‐ Montenegro" },
    { 127474, 127467, "MF ‐ St. Martin" },
    { 127474, 127468, "MG ‐ Madagascar" },
    { 127474, 127469, "MH ‐ Marshall Islands" },
    { 127474, 127472, "MK ‐ North Macedonia" },
    { 127474, 127473, "ML ‐ Mali" },
    { 127474, 127474, "MM ‐ Myanmar (Burma)" },
    { 127474, 127475, "MN ‐ Mongolia" },
    { 127474, 127476, "MO ‐ Macao SAR China" },
    { 127474, 127477, "MP ‐ Northern Mariana Islands" },
    { 127474, 127478, "MQ ‐ Martinique" },
    { 127474, 127479, "MR ‐ Mauritania" },
    { 127474, 127480, "MS ‐ Montserrat" },
    { 127474, 127481, "MT ‐ Malta" },
    { 127474, 127482, "MU ‐ Mauritius" },
    { 127474, 127483, "MV ‐ Maldives" },
    { 127474, 127484, "MW ‐ Malawi" },
    { 127474, 127485, "MX ‐ Mexico" },
    { 127474, 127486, "MY ‐ Malaysia" },
    { 127474, 127487, "MZ ‐ Mozambique" },
    { 127475, 127462, "NA ‐ Namibia" },
    { 127475, 127464, "NC ‐ New Caledonia" },
    { 127475, 127466, "NE ‐ Niger" },
    { 127475, 127467, "NF ‐ Norfolk Island" },
    { 127475, 127468, "NG ‐ Nigeria" },
    { 127475, 127470, "NI ‐ Nicaragua" },
    { 127475, 127473, "NL ‐ Netherlands" },
    { 127475, 127476, "NO ‐ Norway" },
    { 127475, 127477, "NP ‐ Nepal" },
    { 127475, 127479, "NR ‐ Nauru" },
    { 127475, 127482, "NU ‐ Niue" },
    { 127475, 127487, "NZ ‐ New Zealand" },
    { 127476, 127474, "OM ‐ Oman" },
    { 127477, 127462, "PA ‐ Panama" },
    { 127477, 127466, "PE ‐ Peru" },
    { 127477, 127467, "PF ‐ French Polynesia" },
    { 127477, 127468, "PG ‐ Papua New Guinea" },
    { 127477, 127469, "PH ‐ Philippines" },
    { 127477, 127472, "PK ‐ Pakistan" },
    { 127477, 127473, "PL ‐ Poland" },
    { 127477, 127474, "PM ‐ St. Pierre & Miquelon" },
    { 127477, 127475, "PN ‐ Pitcairn Islands" },
    { 127477, 127479, "PR ‐ Puerto Rico" },
    { 127477, 127480, "PS ‐ Palestinian Territories" },
    { 127477, 127481, "PT ‐ Portugal" },
    { 127477, 127484, "PW ‐ Palau" },
    { 127477, 127486, "PY ‐ Paraguay" },
    { 127478, 127462, "QA ‐ Qatar" },
    { 127479, 127466, "RE ‐ Réunion" },
    { 127479, 127476, "RO ‐ Romania" },
    { 127479, 127480, "RS ‐ Serbia" },
    { 127479, 127482, "RU ‐ Russia" },
    { 127479, 127484, "RW ‐ Rwanda" },
    { 127480, 127462, "SA ‐ Saudi Arabia" },
    { 127480, 127463, "SB ‐ Solomon Islands" },
    { 127480, 127464, "SC ‐ Seychelles" },
    { 127480, 127465, "SD ‐ Sudan" },
    { 127480, 127466, "SE ‐ Sweden" },
    { 127480, 127468, "SG ‐ Singapore" },
    { 127480, 127469, "SH ‐ St. Helena" },
    { 127480, 127470, "SI ‐ Slovenia" },
    { 127480, 127471, "SJ ‐ Svalbard & Jan Mayen" },
    { 127480, 127472, "SK ‐ Slovakia" },
    { 127480, 127473, "SL ‐ Sierra Leone" },
    { 127480, 127474, "SM ‐ San Marino" },
    { 127480, 127475, "SN ‐ Senegal" },
    { 127480, 127476, "SO ‐ Somalia" },
    { 127480, 127479, "SR ‐ Suriname" },
    { 127480, 127480, "SS ‐ South Sudan" },
    { 127480, 127481, "ST ‐ São Tomé & Príncipe" },
    { 127480, 127483, "SV ‐ El Salvador" },
    { 127480, 127485, "SX ‐ Sint Maarten" },
    { 127480, 127486, "SY ‐ Syria" },
    { 127480, 127487, "SZ ‐ Eswatini" },
    { 127481, 127462, "TA ‐ Tristan da Cunha" },
    { 127481, 127464, "TC ‐ Turks & Caicos Islands" },
    { 127481, 127465, "TD ‐ Chad" },
    { 127481, 127467, "TF ‐ French Southern Territories" },
    { 127481, 127468, "TG ‐ Togo" },
    { 127481, 127469, "TH ‐ Thailand" },
    { 127481, 127471, "TJ ‐ Tajikistan" },
    { 127481, 127472, "TK ‐ Tokelau" },
    { 127481, 127473, "TL ‐ Timor-Leste" },
    { 127481, 127474, "TM ‐ Turkmenistan" },
    { 127481, 127475, "TN ‐ Tunisia" },
    { 127481, 127476, "TO ‐ Tonga" },
    { 127481, 127479, "TR ‐ Turkey" },
    { 127481, 127481, "TT ‐ Trinidad & Tobago" },
    { 127481, 127483, "TV ‐ Tuvalu" },
    { 127481, 127484, "TW ‐ Taiwan" },
    { 127481, 127487, "TZ ‐ Tanzania" },
    { 127482, 127462, "UA ‐ Ukraine" },
    { 127482, 127468, "UG ‐ Uganda" },
    { 127482, 127474, "UM ‐ U.S. Outlying Islands" },
    { 127482, 127475, "UN ‐ United Nations" },
    { 127482, 127480, "US ‐ United States" },
    { 127482, 127486, "UY ‐ Uruguay" },
    { 127482, 127487, "UZ ‐ Uzbekistan" },
    { 127483, 127462, "VA ‐ Vatican City" },
    { 127483, 127464, "VC ‐ St. Vincent & Grenadines" },
    { 127483, 127466, "VE ‐ Venezuela" },
    { 127483, 127468, "VG ‐ British Virgin Islands" },
    { 127483, 127470, "VI ‐ U.S. Virgin Islands" },
    { 127483, 127475, "VN ‐ Vietnam" },
    { 127483, 127482, "VU ‐ Vanuatu" },
    { 127484, 127467, "WF ‐ Wallis & Futuna" },
    { 127484, 127480, "WS ‐ Samoa" },
    { 127485, 127472, "XK ‐ Kosovo" },
    { 127486, 127466, "YE ‐ Yemen" },
    { 127486, 127481, "YT ‐ Mayotte" },
    { 127487, 127462, "ZA ‐ South Africa" },
    { 127487, 127474, "ZM ‐ Zambia" },
    { 127487, 127484, "ZW ‐ Zimbabwe" },
};

G_END_DECLS

#endif /* __FONT_MANAGER_REGIONAL_INDICATOR_SYMBOLS_H__ */
