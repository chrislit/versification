/******************************************************************************
 * canon_gnt.h - Versification data for the GNT system
 *
 * Copyright 2014
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 */

#ifndef CANON_GNT_H
#define CANON_GNT_H

SWORD_NAMESPACE_START


// Versification system: GNT
// Book order: Matt Mark Luke John Acts Rom 1Cor 2Cor Gal Eph Phil Col 1Thess 2Thess 1Tim 2Tim Titus Phlm Heb Jas 1Pet 2Pet 1John 2John 3John Jude Rev

/******************************************************************************
 * [on]tbooks_gnt - initialize static instance for all canonical
 *		 text names and chapmax
 */
struct sbook otbooks_gnt[] = {
  {"", "", "", 0}
};

struct sbook ntbooks_gnt[] = {
  {"Matthew", "Matt", "Matt", 28},
  {"Mark", "Mark", "Mark", 16},
  {"Luke", "Luke", "Luke", 24},
  {"John", "John", "John", 21},
  {"Acts", "Acts", "Acts", 28},
  {"Romans", "Rom", "Rom", 16},
  {"I Corinthians", "1Cor", "1Cor", 16},
  {"II Corinthians", "2Cor", "2Cor", 13},
  {"Galatians", "Gal", "Gal", 6},
  {"Ephesians", "Eph", "Eph", 6},
  {"Philippians", "Phil", "Phil", 4},
  {"Colossians", "Col", "Col", 4},
  {"I Thessalonians", "1Thess", "1Thess", 5},
  {"II Thessalonians", "2Thess", "2Thess", 3},
  {"I Timothy", "1Tim", "1Tim", 6},
  {"II Timothy", "2Tim", "2Tim", 4},
  {"Titus", "Titus", "Titus", 3},
  {"Philemon", "Phlm", "Phlm", 1},
  {"Hebrews", "Heb", "Heb", 13},
  {"James", "Jas", "Jas", 5},
  {"I Peter", "1Pet", "1Pet", 5},
  {"II Peter", "2Pet", "2Pet", 3},
  {"I John", "1John", "1John", 5},
  {"II John", "2John", "2John", 1},
  {"III John", "3John", "3John", 1},
  {"Jude", "Jude", "Jude", 1},
  {"Revelation of John", "Rev", "Rev", 22},
  {"", "", "", 0}
};

/******************************************************************************
 *	Maximum verses per chapter
 */

int vm_gnt[] = {
  // Matthew
  25, 23, 17, 25, 48, 34, 29, 34, 38, 42,
  30, 50, 58, 36, 39, 28, 27, 35, 30, 34,
  46, 46, 39, 51, 46, 75, 66, 20, 
  // Mark
  45, 28, 35, 41, 43, 56, 37, 38, 50, 52,
  33, 44, 37, 72, 47, 20, 
  // Luke
  80, 52, 38, 44, 39, 49, 50, 56, 62, 42,
  54, 59, 35, 35, 32, 31, 37, 43, 48, 47,
  38, 71, 56, 53, 
  // John
  51, 25, 36, 54, 47, 71, 53, 59, 41, 42,
  57, 50, 38, 31, 27, 33, 26, 40, 42, 31,
  25, 
  // Acts
  26, 47, 26, 37, 42, 15, 60, 40, 43, 48,
  30, 25, 52, 28, 41, 40, 34, 28, 40, 38,
  40, 30, 35, 27, 27, 32, 44, 31, 
  // Romans
  32, 29, 31, 25, 21, 23, 25, 39, 33, 21,
  36, 21, 14, 23, 33, 27, 
  // I Corinthians
  31, 16, 23, 21, 13, 20, 40, 13, 27, 33,
  34, 31, 13, 40, 58, 24, 
  // II Corinthians
  24, 17, 18, 18, 21, 18, 16, 24, 15, 18,
  33, 21, 13, 
  // Galatians
  24, 21, 29, 31, 26, 18, 
  // Ephesians
  23, 22, 21, 32, 33, 24, 
  // Philippians
  30, 30, 21, 23, 
  // Colossians
  29, 23, 25, 18, 
  // I Thessalonians
  10, 20, 13, 18, 28, 
  // II Thessalonians
  12, 17, 18, 
  // I Timothy
  20, 15, 16, 16, 25, 21, 
  // II Timothy
  18, 26, 17, 22, 
  // Titus
  16, 15, 15, 
  // Philemon
  25, 
  // Hebrews
  14, 18, 19, 16, 14, 20, 28, 13, 28, 39,
  40, 29, 25, 
  // James
  27, 26, 18, 17, 20, 
  // I Peter
  25, 25, 22, 19, 14, 
  // II Peter
  21, 22, 18, 
  // I John
  10, 29, 24, 21, 21, 
  // II John
  13, 
  // III John
  15, 
  // Jude
  25, 
  // Revelation of John
  20, 29, 22, 11, 14, 17, 17, 13, 21, 11,
  19, 18, 18, 20, 8, 21, 18, 24, 21, 15,
  27, 21
};


SWORD_NAMESPACE_END


#endif
