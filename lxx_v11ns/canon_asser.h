/******************************************************************************
 *
 *  canon_asser.h - Versification data for the Asser system
 *
 * $Id: canon_asser.h 469 2013-08-02 17:40:09Z chrislit $
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

#ifndef CANON_ASSER_H
#define CANON_ASSER_H

SWORD_NAMESPACE_START


// Versification system: Asser
// Book order: Gen Exod Lev Num Deut Josh Judg Ruth 1Sam 2Sam 1Kgs 2Kgs 1Chr 2Chr 1Esd Ezra Neh Tob Jdt Esth 1Macc 2Macc 3Macc Ps Job Prov Eccl Song Wis Sir Hos Amos Mic Joel Obad Jonah Nah Hab Zeph Hag Zech Mal Isa Jer Bar Lam EpJer Ezek Sus Dan PrAzar Bel 4Macc PrMan

// Source: http://orthodoxengland.org.uk/zot.htm

/******************************************************************************
 * [on]tbooks_asser - initialize static instance for all canonical
 *		 text names and chapmax
 */
struct sbook otbooks_asser[] = {
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

int vm_asser[] = {
  // Genesis
  31, 25, 24, 26, 32, 22, 24, 22, 29, 32,
  32, 20, 18, 24, 20, 16, 27, 33, 38, 18,
  34, 24, 20, 67, 34, 35, 46, 22, 35, 43,
  55, 32, 20, 31, 29, 43, 36, 30, 23, 23,
  57, 39, 33, 34, 28, 34, 31, 22, 33, 26,
  // Exodus
  22, 25, 22, 31, 23, 30, 29, 28, 35, 29,
  10, 51, 22, 31, 27, 36, 16, 27, 25, 26,
  36, 31, 33, 18, 40, 37, 21, 39, 46, 38,
  18, 35, 23, 35, 35, 40, 21, 27, 23, 32,
  // Leviticus
  17, 16, 17, 35, 26, 23, 38, 36, 24, 20,
  47, 8, 59, 57, 33, 34, 16, 30, 37, 27,
  24, 33, 44, 23, 55, 46, 34,
  // Numbers
  54, 34, 51, 49, 31, 27, 89, 26, 23, 36,
  35, 15, 34, 45, 41, 35, 28, 32, 22, 29,
  35, 41, 30, 25, 16, 65, 23, 31, 39, 17,
  54, 42, 56, 29, 34, 13,
  // Deuteronomy
  46, 37, 29, 49, 33, 25, 26, 20, 29, 22,
  32, 31, 19, 29, 23, 22, 20, 22, 21, 20,
  23, 29, 26, 22, 19, 19, 26, 69, 28, 20,
  30, 52, 29, 11,
  // Joshua
  18, 24, 17, 24, 16, 27, 26, 29, 27, 42,
  23, 24, 32, 15, 63, 10, 18, 28, 51, 9,
  45, 34, 16, 33,
  // Judges
  36, 23, 31, 24, 31, 40, 25, 35, 57, 18,
  40, 15, 25, 20, 20, 31, 13, 31, 30, 48,
  25,
  // Ruth
  22, 23, 18, 22,
  // I Samuel
  28, 36, 21, 22, 12, 21, 17, 21, 27, 27,
  15, 25, 23, 52, 35, 23, 58, 29, 24, 42,
  15, 23, 28, 23, 44, 25, 12, 25, 11, 31,
  13,
  // II Samuel
  27, 32, 39, 12, 25, 23, 29, 17, 13, 19,
  27, 31, 39, 33, 37, 23, 29, 33, 43, 26,
  22, 51, 39, 25,
  // I Kings
  53, 46, 28, 20, 32, 36, 49, 66, 28, 29,
  44, 33, 34, 31, 34, 34, 24, 46, 21, 28,
  43, 54,
  // II Kings
  18, 25, 27, 44, 27, 33, 20, 29, 37, 36,
  21, 21, 25, 29, 38, 20, 41, 37, 37, 21,
  26, 20, 37, 20, 30,
  // I Chronicles
  54, 55, 24, 43, 41, 66, 40, 40, 44, 14,
  47, 41, 14, 17, 29, 43, 27, 17, 19, 8,
  30, 19, 32, 31, 30, 32, 34, 21, 30,
  // II Chronicles
  16, 18, 17, 22, 14, 42, 22, 18, 31, 19,
  23, 16, 22, 15, 19, 14, 19, 34, 11, 37,
  20, 12, 21, 27, 28, 23, 9, 27, 35, 27,
  21, 33, 25, 33, 27, 23,
  // I Esdras
  55, 25, 23, 63, 70, 33, 15, 92, 55,
  // Ezra
  11, 70, 13, 24, 17, 22, 28, 36, 15, 44,
  // Nehemiah
  11, 20, 36, 17, 19, 19, 73, 18, 38, 39,
  36, 47, 31,
  // Esther (chapters 11-16 represent the additions, whether identified as chapters 11-16 or additions A-F)
  22, 23, 15, 17, 14, 14, 10, 17, 32, 3,
  0, 0, 0, 0, 0, 0,
  // Judith
  16, 28, 10, 15, 24, 21, 32, 36, 14, 23,
  23, 20, 20, 19, 13, 25,
  // Tobit
  22, 14, 17, 21, 22, 19, 17, 21, 6, 13,
  17, 22, 18, 15,
  // I Maccabees
  64, 70, 60, 61, 68, 63, 50, 32, 73, 89,
  74, 53, 53, 49, 41, 24,
  // II Maccabees
  36, 32, 40, 50, 27, 31, 42, 36, 29, 38,
  38, 45, 26, 46, 39,
  // III Maccabees
  29, 33, 30, 21, 51, 41, 23,
  // IV Maccabees
  35, 24, 21, 26, 38, 35, 23, 29, 32, 21,
  27, 20, 27, 20, 32, 25, 24, 24,
  // Psalms
  6, 13, 9, 9, 13, 11, 18, 10, 40, 7,
  9, 6, 7, 5, 11, 15, 51, 15, 10, 14,
  32, 6, 10, 22, 12, 14, 9, 11, 13, 25,
  11, 22, 23, 28, 13, 40, 23, 14, 18, 14,
  12, 5, 27, 18, 12, 10, 15, 21, 23, 21,
  11, 7, 9, 24, 14, 12, 12, 18, 14, 9,
  13, 12, 11, 14, 20, 8, 36, 37, 6, 24,
  19, 28, 23, 10, 13, 21, 72, 13, 20, 17, // Ps 73:24 appears misnumbered
  8, 19, 13, 14, 17, 7, 19, 53, 17, 16,
  15, 5, 23, 11, 13, 12, 9, 9, 5, 8,
  29, 22, 36, 45, 48, 43, 14, 31, 7, 10,
  10, 9, 26, 9, 9, 2, 29, 176, 7, 8,
  9, 4, 8, 5, 6, 5, 6, 8, 8, 3,
  18, 3, 3, 21, 26, 9, 8, 24, 14, 10,
  8, 12, 15, 21, 10, 11, 9, 14, 9, 6,
  7,
  // Prayer of Manasses
  15,
  // Proverbs
  33, 23, 35, 27, 23, 35, 27, 36, 18, 32,
  31, 28, 25, 35, 33, 33, 28, 22, 29, 30,
  31, 29, 35, 33, 28, 28, 27, 28, 31, 0,
  0,
  // Ecclesiastes
  18, 26, 22, 17, 19, 12, 29, 17, 18, 20,
  10, 14,
  // Song of Solomon
  17, 17, 11, 16, 16, 12, 14, 14,
  // Job
  22, 13, 26, 21, 27, 30, 21, 22, 35, 22,
  20, 25, 28, 22, 35, 23, 16, 21, 29, 29,
  34, 30, 17, 25, 6, 14, 22, 28, 25, 31,
  40, 22, 33, 37, 16, 33, 24, 41, 30, 32,
  26, 17,
  // Wisdom
  16, 25, 19, 20, 23, 25, 30, 21, 19, 21,
  26, 27, 19, 31, 19, 29, 21, 25, 22,
  // Sirach
  30, 18, 31, 31, 15, 37, 36, 19, 18, 31,
  34, 18, 26, 27, 20, 30, 32, 33, 30, 31,
  28, 27, 27, 34, 26, 29, 30, 26, 28, 25,
  31, 24, 33, 26, 24, 27, 31, 34, 35, 30,
  27, 25, 33, 23, 26, 20, 25, 25, 16, 29,
  30,
  // Psalms of Solomon
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  // Hosea
  9, 25, 5, 19, 15, 11, 16, 14, 17, 15,
  11, 15, 15, 10,
  // Amos
  15, 16, 15, 13, 27, 15, 17, 14, 15,
  // Micah
  16, 13, 12, 14, 14, 16, 20,
  // Joel
  20, 27, 5, 21,
  // Obadiah
  21,
  // Jonah
  16, 11, 10, 11,
  // Nahum
  14, 14, 19,
  // Habakkuk
  17, 20, 19,
  // Zephaniah
  18, 15, 20,
  // Haggai
  15, 23,
  // Zechariah
  17, 17, 10, 14, 11, 15, 14, 23, 17, 12,
  17, 14, 9, 21,
  // Malachi
  14, 17, 18, 6,
  // Isaiah
  31, 21, 26, 6, 30, 13, 25, 22, 20, 34,
  16, 6, 22, 32, 9, 14, 14, 7, 25, 6,
  17, 25, 18, 23, 12, 21, 13, 29, 24, 33,
  9, 19, 24, 17, 10, 22, 38, 22, 8, 31,
  29, 25, 28, 28, 26, 13, 14, 22, 26, 11,
  23, 15, 12, 17, 13, 11, 21, 14, 21, 22,
  11, 12, 19, 12, 25, 24,
  // Jeremiah
  19, 37, 25, 31, 31, 30, 34, 22, 26, 25,
  23, 17, 27, 22, 21, 21, 27, 23, 15, 18,
  14, 30, 40, 10, 18, 28, 46, 64, 22, 16,
  44, 24, 24, 22, 17, 32, 24, 40, 44, 13,
  22, 18, 32, 21, 28, 18, 16, 18, 22, 13,
  35, 34,
  // Baruch
  22, 35, 37, 37, 9,
  // Lamentations
  22, 22, 66, 22, 22,
  // Epistle of Jeremiah
  73,
  // Ezekiel
  28, 10, 27, 17, 17, 14, 27, 17, 11, 22,
  25, 28, 23, 23, 8, 63, 24, 32, 14, 49,
  32, 31, 49, 27, 17, 21, 36, 26, 21, 26,
  18, 32, 33, 31, 15, 38, 28, 23, 29, 49,
  26, 20, 27, 31, 25, 24, 23, 35,
  // Prayer of Azariah
  67,
  // Susanna
  64,
  // Daniel
  21, 49, 33, 34, 31, 28, 28, 27, 27, 21,
  45, 13,
  // Bel and the Dragon
  42,
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
