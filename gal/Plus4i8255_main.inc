/* Plus4i8255 GAL Equations
 * Copyright 2024 SukkoPera <software@sukkology.net>
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

/* These equations can be turned into a JED file through the WinCUPL software.
 * Too bad it's Windows-only and full of bugs...
 */

/** Inputs **/
Pin 1 = reset_in;			// Active-low
Pin 2 = rw;					// Low when writing
Pin 3 = a14;
Pin 4 = a12;
Pin 5 = a10;
Pin 6 = a8;
Pin 7 = a7;
Pin 8 = a6;
Pin 9 = a5;
Pin 10 = a4;
Pin 11 = a2;
Pin 13 = phi2;				// Rising edge => Address valid, Falling edge => Data valid (for writes)
Pin 14 = a3;
Pin 15 = a9;
Pin 20 = a11;
Pin 21 = a13;
Pin 22 = a15;
Pin 23 = ba;				// High when Bus Available

/** Outputs **/
Pin 19 = reset_out;			// Active-high
Pin 16 = wr8255;			// Active-low
Pin 17 = rd8255;			// Active-low
Pin 18 = cs8255;			// Active-low

/** Declarations and Intermediate Variable Definitions **/
Field addr = [a15..2];

/** Logic Equations **/
reset_out = !reset_in;

// Original equations
//~ rd8255 = !(phi2 & rw & ba);	// aec removed
//~ wr8255 = !(phi2 & !rw);	// aec removed
//~ cs8255 = !(ras & addr:[FE00..FE03]);		// Addresses are valid on Phi2 rising edge

_addressed = addr:[FE00..FE03];
rd8255 = !(_addressed & phi2 & rw & ba);
wr8255 = !(_addressed & phi2 & !rw);
cs8255 = !_addressed;		// The gotcha with this chip is that /CS must go down *before* /RD and /WR
//~ cs8255 = !(_addressed & (!phi2 # !rd8255 # !wr8255));
