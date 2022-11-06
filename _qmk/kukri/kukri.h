/* Copyright 2021 drhigsby
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define zzzz KC_NO

#define LAYOUT( \
    k001, k101, k002, k102, k003, k103,     k004, k104, k005, k105, k006, k106,\
    k201, k301, k202, k302, k203, k303,     k204, k304, k205, k305, k206, k306,\
    k401, k501, k402, k502, k403, k503,     k404, k504, k405, k505, k406, k506, k606,\
    k601,             k701, k602, k702,     k603, k703, k604,             k704, k605, k705 \
){ \
    { k001, k002, k003, k004, k005, k006, },\
    { k101, k102, k103, k104, k105, k106, },\
    { k201, k202, k203, k204, k205, k206, },\
    { k301, k302, k303, k304, k305, k306, },\
    { k401, k402, k403, k404, k405, k406, },\
    { k501, k502, k503, k504, k505, k506, },\
    { k601, k602, k603, k604, k605, k606, },\
    { k701, k702, k703, k704, k705,       } \
}

