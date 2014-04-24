/******************************************************************************
 *
 *  canon_thomson.h -	Versification data for the Thomson system
 *
 * $Id: canon_thomson.h 469 2013-08-02 17:40:09Z chrislit $
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

#ifndef CANON_THOMSON_H
#define CANON_THOMSON_H

SWORD_NAMESPACE_START

// Versification system: Thomson
// Book order: Gen Exod Lev Num Deut Josh Judg Ruth 1Sam 2Sam 1Kgs 2Kgs 1Chr 2Chr Ezra Neh Esth Job Ps Prov Eccl Song Isa Jer Lam Ezek Dan Hos Joel Amos Obad Jonah Mic Nah Hab Zeph Hag Zech Mal

// Source: http://www.archive.org/details/oldcovenantcommo01thom
//         http://www.archive.org/details/oldcovenantcommo02thom
//         http://www.archive.org/details/holybiblecontain03thom
//         http://www.archive.org/details/holybiblecontain04thom (NT, which is a strict subset of that seen in the Orthodox v11n)
//         
//         http://books.google.com/books?id=K88UAAAAYAAJ
//         http://books.google.com/books?id=b88UAAAAYAAJ
//         http://books.google.com/books?id=7JgXAAAAYAAJ
//         http://books.google.com/books?id=NpkXAAAAYAAJ (NT, which is a strict subset of that seen in the Orthodox v11n)

/******************************************************************************
 * [on]tbooks_thomson - initialize static instance for all canonical
 *		 text names and chapmax
 */
struct sbook otbooks_thomson[] = {
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

int vm_thomson[] = {
  // Genesis
  31, 24, 23, 26, 28, 22, 24, 22, 29, 32,
  32, 20, 18, 24, 21, 15, 26, 32, 38, 18,
  34, 24, 20, 66, 34, 34, 46, 22, 35, 43,
  55, 32, 20, 31, 28, 43, 36, 30, 23, 22,
  56, 38, 34, 34, 28, 34, 31, 22, 33, 26,
  // Exodus
  22, 24, 22, 31, 22, 28, 25, 32, 35, 28,
  10, 50, 22, 31, 27, 35, 15, 27, 25, 26,
  36, 31, 33, 18, 40, 37, 21, 43, 46, 38,
  18, 35, 23, 35, 35, 8, 0, 0, 0, 38,
  // Leviticus
  17, 16, 17, 35, 19, 30, 38, 36, 24, 20,
  47, 8, 59, 54, 33, 33, 16, 30, 36, 26,
  24, 33, 44, 23, 54, 46, 34,
  // Numbers
  54, 34, 51, 48, 30, 27, 89, 26, 23, 36,
  35, 15, 33, 45, 41, 50, 13, 32, 22, 29,
  35, 41, 30, 25, 17, 65, 22, 31, 40, 16,
  54, 42, 56, 29, 34, 13,
  // Deuteronomy
  45, 37, 28, 49, 33, 25, 26, 20, 29, 22,
  31, 32, 18, 28, 23, 21, 20, 22, 20, 20,
  22, 30, 25, 22, 19, 19, 27, 68, 29, 20,
  30, 52, 29, 10,
  // Joshua
  18, 24, 17, 24, 15, 27, 26, 35, 27, 41,
  23, 15, 32, 14, 63, 10, 18, 25, 51, 9,
  45, 34, 16, 33,
  // Judges
  36, 22, 31, 23, 32, 40, 25, 34, 57, 18,
  40, 15, 25, 20, 20, 31, 12, 31, 30, 48,
  25,
  // Ruth
  22, 23, 18, 18,
  // I Samuel
  28, 36, 21, 22, 12, 21, 17, 22, 27, 27,
  15, 25, 23, 52, 35, 23, 54, 28, 24, 42,
  15, 23, 29, 22, 43, 25, 12, 25, 11, 31,
  13,
  // II Samuel
  27, 32, 39, 12, 25, 23, 29, 18, 13, 19,
  27, 31, 38, 33, 37, 23, 29, 33, 43, 23,
  22, 51, 26, 25,
  // I Kings
  53, 46, 28, 34, 17, 38, 51, 66, 27, 28,
  43, 33, 34, 29, 34, 34, 24, 45, 21, 29,
  43, 52,
  // II Kings
  18, 25, 27, 44, 27, 33, 19, 29, 37, 36,
  20, 21, 25, 29, 38, 20, 41, 37, 37, 20,
  26, 20, 37, 20, 29,
  // I Chronicles
  51, 55, 24, 43, 26, 77, 40, 39, 44, 14,
  47, 40, 14, 17, 29, 43, 27, 17, 19, 8,
  30, 19, 32, 31, 30, 32, 33, 21, 29,
  // II Chronicles
  17, 18, 17, 22, 14, 40, 22, 17, 30, 19,
  23, 16, 22, 14, 19, 14, 18, 34, 11, 36,
  20, 11, 21, 27, 28, 23, 9, 27, 36, 27,
  2, 33, 24, 33, 27, 22,
  // I Esdras
  0, 0, 0, 0, 0, 0, 0, 0, 0,
  // Ezra
  11, 70, 13, 24, 17, 22, 28, 36, 15, 44,
  // Nehemiah
  11, 19, 32, 23, 19, 19, 73, 18, 38, 39,
  36, 47, 30,
  // Esther (chapters 11-16 represent the additions, whether identified as chapters 11-16 or additions A-F)
  21, 23, 15, 17, 14, 14, 10, 17, 31, 3,
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
  6, 12, 8, 8, 11, 10, 15, 9, 38, 7,
  8, 5, 7, 5, 11, 15, 50, 14, 9, 13,
  31, 6, 10, 22, 12, 14, 9, 11, 12, 24,
  11, 22, 22, 28, 12, 40, 22, 13, 17, 13,
  11, 5, 26, 17, 11, 9, 14, 20, 23, 19,
  9, 6, 7, 23, 13, 11, 10, 17, 12, 8,
  11, 11, 10, 13, 20, 7, 35, 35, 5, 24,
  19, 28, 23, 9, 12, 19, 72, 13, 19, 16,
  8, 18, 12, 13, 17, 7, 18, 52, 17, 16,
  15, 5, 23, 11, 13, 12, 9, 9, 5, 8,
  28, 22, 35, 45, 48, 43, 13, 31, 7, 10,
  10, 9, 8, 18, 19, 1, 29, 176, 7, 8,
  9, 4, 8, 5, 6, 5, 6, 8, 8, 3,
  18, 3, 3, 21, 26, 9, 8, 24, 13, 10,
  7, 12, 15, 22, 10, 11, 9, 14, 9, 6,
  1,
  // Original Thomson Psalms (without LXX-style Psalm numbering)
  // 6, 12, 8, 8, 11, 10, 15, 9, 20, 18,
  // 7, 8, 5, 7, 5, 11, 15, 50, 14, 9,
  // 13, 31, 6, 10, 22, 12, 14, 9, 11, 12, 
  // 24, 11, 22, 22, 28, 12, 40, 22, 13, 17,
  // 13, 11, 5, 26, 17, 11, 9, 14, 20, 23,
  // 19, 9, 6, 7, 23, 13, 11, 10, 17, 12,
  // 8, 11, 11, 10, 13, 20, 7, 35, 35, 5,
  // 24, 19, 28, 23, 9, 12, 19, 72, 13, 19,
  // 16, 8, 18, 12, 13, 17, 7, 18, 52, 17,
  // 16, 15, 5, 23, 11, 13, 12, 9, 9, 5,
  // 8, 28, 22, 35, 45, 48, 43, 13, 31, 7,
  // 10, 10, 9, 8, 18, 19, 1, 29, 176, 7,
  // 8, 9, 4, 8, 5, 6, 5, 6, 8, 8,
  // 3, 18, 3, 3, 21, 26, 9, 8, 24, 13,
  // 10, 7, 12, 15, 22, 10, 20, 14, 9, 6,
  // 1,
  // Prayer of Manasses
  0,
  // Proverbs
  33, 22, 35, 27, 23, 35, 28, 37, 18, 32, // Prov.7.27 appears misnumbered as Prov.7.28
  31, 28, 25, 35, 33, 33, 28, 22, 29, 30,
  31, 28, 35, 34, 28, 28, 27, 28, 27, 33,
  31,
  // Ecclesiastes
  18, 26, 22, 16, 20, 12, 29, 17, 18, 20,
  10, 13,
  // Song of Solomon
  17, 17, 11, 16, 16, 13, 13, 15,
  // Job
  22, 13, 26, 21, 27, 30, 22, 22, 35, 22,
  20, 25, 27, 22, 35, 22, 16, 21, 29, 29,
  34, 30, 17, 25, 6, 14, 22, 27, 25, 31,
  40, 22, 33, 35, 16, 32, 24, 41, 29, 24,
  34, 17,
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
  11, 23, 5, 19, 15, 11, 16, 14, 17, 15,
  12, 13, 16, 9,
  // Amos
  15, 16, 15, 13, 26, 14, 17, 13, 15,
  // Micah
  16, 13, 12, 13, 14, 16, 19,
  // Joel
  20, 32, 21, 0,
  // Obadiah
  21,
  // Jonah
  17, 10, 10, 11,
  // Nahum
  15, 13, 19,
  // Habakkuk
  16, 20, 19,
  // Zephaniah
  18, 15, 20,
  // Haggai
  14, 23,
  // Zechariah
  21, 13, 10, 13, 11, 15, 13, 23, 17, 12,
  17, 13, 9, 21,
  // Malachi
  14, 17, 18, 6,
  // Isaiah
  31, 21, 26, 6, 30, 13, 25, 22, 20, 33,
  16, 6, 22, 32, 9, 14, 14, 7, 24, 6,
  16, 25, 18, 23, 12, 21, 13, 28, 24, 33,
  9, 19, 23, 17, 9, 22, 38, 22, 8, 31,
  29, 25, 28, 28, 25, 13, 15, 21, 26, 11,
  23, 15, 12, 17, 13, 11, 21, 14, 21, 22,
  11, 12, 19, 12, 25, 24,
  // Jeremiah
  19, 37, 25, 31, 31, 29, 34, 21, 26, 25,
  23, 17, 27, 21, 21, 21, 27, 23, 15, 18,
  12, 30, 40, 10, 38, 24, 18, 17, 31, 23,
  40, 44, 13, 22, 19, 32, 21, 29, 18, 16,
  18, 22, 13, 30, 5, 28, 7, 44, 38, 46,
  63, 34,
  // Baruch
  0, 0, 0, 0, 0,
  // Lamentations
  22, 22, 66, 22, 22,
  // Epistle of Jeremiah
  0,
  // Ezekiel
  27, 9, 27, 17, 17, 14, 27, 18, 11, 22,
  24, 28, 23, 23, 8, 63, 24, 31, 14, 48,
  32, 31, 49, 27, 17, 21, 36, 26, 21, 26,
  18, 32, 33, 30, 15, 38, 28, 23, 29, 49,
  26, 20, 27, 31, 25, 24, 23, 34,
  // Prayer of Azariah
  0,
  // Susanna
  0,
  // Daniel
  20, 49, 30, 37, 30, 28, 28, 27, 27, 21,
  45, 13,
  // Bel and the Dragon
  0,
  // I Enoch
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
  0, 0, 0, 0, 0, 0, 0, 0,
  // Odes
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0,
};

SWORD_NAMESPACE_END
#endif
