/******************************************************************************
 *
 *  canon_eenochgeez.h -	Versification data for the EEnochGeez system
 *
 * $Id: canon_eenochgeez.h 469 2013-08-02 17:40:09Z chrislit $
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

#ifndef CANON_EENOCHGEEZ_H
#define CANON_EENOCHGEEZ_H

SWORD_NAMESPACE_START


// Versification system: EEnochGeez
// Book order: 1En

// Source: CrossWire EEnochGeez module (http://crosswire.org/sword/modules/ModInfo.jsp?modName=EEnochGeez&beta=true)

/******************************************************************************
 * [on]tbooks_eenochgeez - initialize static instance for all canonical
 *		 text names and chapmax
 */
struct sbook otbooks_eenochgeez[] = {
  {"Genesis", "Gen", "Gen", 50},
  {"Exodus", "Exod", "Exod", 40},
  {"Leviticus", "Lev", "Lev", 27},
  {"Numbers", "Num", "Num", 36},
  {"Deuteronomy", "Deut", "Deut", 34},
  {"Joshua", "Josh", "Josh", 24},
  {"Judges", "Judg", "Judg", 21},
  {"Ruth", "Ruth", "Ruth", 4},
  {"I Samuel", "1Sam", "1Sam", 31},
  {"II Samuel", "2Sam", "2Sam", 24},
  {"I Kings", "1Kgs", "1Kgs", 22},
  {"II Kings", "2Kgs", "2Kgs", 25},
  {"I Chronicles", "1Chr", "1Chr", 29},
  {"II Chronicles", "2Chr", "2Chr", 36},
  {"I Esdras", "1Esd", "1Esd", 9},
  {"Ezra", "Ezra", "Ezra", 10},
  {"Nehemiah", "Neh", "Neh", 13},
  {"Esther", "Esth", "Esth", 16},
  {"Judith", "Jdt", "Jdt", 16},
  {"Tobit", "Tob", "Tob", 14},
  {"I Maccabees", "1Macc", "1Macc", 16},
  {"II Maccabees", "2Macc", "2Macc", 15},
  {"III Maccabees", "3Macc", "3Macc", 7},
  {"IV Maccabees", "4Macc", "4Macc", 18},
  {"Psalms", "Ps", "Ps", 151},
  {"Prayer of Manasses", "PrMan", "PrMan", 1},
  {"Proverbs", "Prov", "Prov", 31},
  {"Ecclesiastes", "Eccl", "Eccl", 12},
  {"Song of Solomon", "Song", "Song", 8},
  {"Job", "Job", "Job", 42},
  {"Wisdom", "Wis", "Wis", 19},
  {"Sirach", "Sir", "Sir", 51},
  {"Psalms of Solomon", "PssSol", "PssSol", 18},
  {"Hosea", "Hos", "Hos", 14},
  {"Amos", "Amos", "Amos", 9},
  {"Micah", "Mic", "Mic", 7},
  {"Joel", "Joel", "Joel", 4},
  {"Obadiah", "Obad", "Obad", 1},
  {"Jonah", "Jonah", "Jonah", 4},
  {"Nahum", "Nah", "Nah", 3},
  {"Habakkuk", "Hab", "Hab", 3},
  {"Zephaniah", "Zeph", "Zeph", 3},
  {"Haggai", "Hag", "Hag", 2},
  {"Zechariah", "Zech", "Zech", 14},
  {"Malachi", "Mal", "Mal", 4},
  {"Isaiah", "Isa", "Isa", 66},
  {"Jeremiah", "Jer", "Jer", 52},
  {"Baruch", "Bar", "Bar", 5},
  {"Lamentations", "Lam", "Lam", 5},
  {"Epistle of Jeremiah", "EpJer", "EpJer", 1},
  {"Ezekiel", "Ezek", "Ezek", 48},
  {"Prayer of Azariah", "PrAzar", "PrAzar", 1},
  {"Susanna", "Sus", "Sus", 1},
  {"Daniel", "Dan", "Dan", 12},
  {"Bel and the Dragon", "Bel", "Bel", 1},
  {"I Enoch", "1En", "1En", 108},
  {"Odes", "Odes", "Odes", 14},
  {"", "", "", 0}
};

/******************************************************************************
 *	Maximum verses per chapter
 */

int vm_eenochgeez[] = {
  // Genesis
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  // Exodus
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  // Leviticus
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0,
  // Numbers
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0,
  // Deuteronomy
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0,
  // Joshua
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0,
  // Judges
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0,
  // Ruth
  0, 0, 0, 0,
  // I Samuel
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0,
  // II Samuel
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0,
  // I Kings
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0,
  // II Kings
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  // I Chronicles
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0,
  // II Chronicles
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0,
  // I Esdras
  0, 0, 0, 0, 0, 0, 0, 0, 0,
  // Ezra
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  // Nehemiah
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0,
  // Esther (chapters 11-16 represent the additions, whether identified as chapters 11-16 or additions A-F)
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0,
  // Judith
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0,
  // Tobit
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0,
  // I Maccabees
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0,
  // II Maccabees
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  // III Maccabees
  0, 0, 0, 0, 0, 0, 0,
  // IV Maccabees
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  // Psalms
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0,
  // Prayer of Manasses
  0,
  // Proverbs
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0,
  // Ecclesiastes
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0,
  // Song of Solomon
  0, 0, 0, 0, 0, 0, 0, 0,
  // Job
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0,
  // Wisdom
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0,
  // Sirach
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0,
  // Psalms of Solomon
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  // Hosea
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0,
  // Amos
  0, 0, 0, 0, 0, 0, 0, 0, 0,
  // Micah
  0, 0, 0, 0, 0, 0, 0,
  // Joel
  0, 0, 0, 0,
  // Obadiah
  0,
  // Jonah
  0, 0, 0, 0,
  // Nahum
  0, 0, 0,
  // Habakkuk
  0, 0, 0,
  // Zephaniah
  0, 0, 0,
  // Haggai
  0, 0,
  // Zechariah
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0,
  // Malachi
  0, 0, 0, 0,
  // Isaiah
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0,
  // Jeremiah
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0,
  // Baruch
  0, 0, 0, 0, 0,
  // Lamentations
  0, 0, 0, 0, 0,
  // Epistle of Jeremiah
  0,
  // Ezekiel
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  // Prayer of Azariah
  0,
  // Susanna
  0,
  // Daniel
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0,
  // Bel and the Dragon
  0,
  // I Enoch
  9, 3, 1, 1, 9, 8, 6, 4, 11, 22,
  2, 6, 10, 24, 12, 4, 8, 16, 3, 7,
  10, 14, 4, 6, 7, 5, 5, 3, 2, 2,
  3, 6, 4, 3, 1, 4, 6, 6, 14, 10,
  9, 3, 4, 1, 6, 8, 4, 10, 4, 5,
  5, 9, 7, 10, 4, 8, 3, 6, 3, 25,
  12, 16, 12, 2, 12, 3, 13, 5, 30, 4,
  17, 37, 8, 17, 9, 14, 8, 17, 6, 8,
  10, 20, 11, 6, 10, 6, 4, 3, 77, 43,
  19, 5, 14, 11, 7, 8, 10, 15, 16, 13,
  9, 11, 14, 13, 2, 19, 3, 12,
  // Odes
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0,
};

SWORD_NAMESPACE_END
#endif
