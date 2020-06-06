/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 3870 K, 4.7 kOhm pull-up
// 100k ParCan thermistor (104GT-2)
// ATC Semitec 104GT-2/104NT-4-R025H42G (Used in ParCan)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
const short temptable_900[][2] PROGMEM = {
  { OV( 270), 155 },
  { OV( 293), 150 },
  { OV( 319), 145 },
  { OV( 346), 140 },
  { OV( 375), 135 },
  { OV( 405), 130 },
  { OV( 437), 125 },
  { OV( 470), 120 },
  { OV( 505), 115 },
  { OV( 540), 110 },
  { OV( 575), 105 },
  { OV( 611), 100 },
  { OV( 647),  95 },
  { OV( 682),  90 },
  { OV( 717),  85 },
  { OV( 750),  80 },
  { OV( 781),  75 },
  { OV( 811),  70 },
  { OV( 838),  65 },
  { OV( 863),  60 },
  { OV( 886),  55 },
  { OV( 907),  50 },
  { OV( 925),  45 },
  { OV( 941),  40 },
  { OV( 955),  35 },
  { OV( 967),  30 },
  { OV( 977),  25 },
  { OV( 986),  20 },
  { OV( 993),  15 },
  { OV( 999),  10 },
  { OV(1004),   5 },
  { OV(1008),   0 }
};
