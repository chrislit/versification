/******************************************************************************
 *
 *  canon_bos.h -	Versification data for the Bos system
 *
 * $Id: canon_bos.h 465 2013-08-01 05:48:44Z chrislit $
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

#ifndef CANON_BOS_H
#define CANON_BOS_H

SWORD_NAMESPACE_START


// Versification system: Bos
// Book order: Gen Exod Lev Num Deut Josh Judg Ruth 1Sam 2Sam 
//             1Kgs 2Kgs 1Chr 2Chr Ezra Neh Esth Job Ps Prov Eccl Song Isa
//             Jer Lam Ezek Dan Hos Joel Amos Obad Jonah Mic Nah Hab Zeph Hag Zech Mal 1Esd Tob Jdt Wis Sir Bar EpJer PrAzar Sus Bel 1Macc 2Macc 3Macc 

// Source: http://hdl.handle.net/2027/uc1.32106009754687
//         http://hdl.handle.net/2027/uc1.32106009754695
//         http://hdl.handle.net/2027/uc1.32106008624675
//         http://hdl.handle.net/2027/uc1.32106005865222 (NT, which is a strict subset of that seen in the Orthodox v11n)


/******************************************************************************
 * [on]tbooks_bos - initialize static instance for all canonical
 *		 text names and chapmax
 */
struct sbook otbooks_bos[] = {
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

int vm_bos[] = {
  // Genesis
  31, 25, 24, 26, 32, 22, 24, 22, 29, 32,
  32, 20, 18, 24, 21, 16, 27, 33, 38, 18,
  34, 24, 20, 67, 34, 35, 46, 22, 35, 43,
  55, 32, 20, 31, 29, 43, 36, 30, 23, 23,
  57, 38, 34, 34, 28, 34, 31, 22, 33, 26,
  // Exodus
  22, 25, 22, 31, 23, 30, 25, 32, 35, 29,
  10, 51, 22, 31, 27, 36, 16, 27, 25, 26,
  36, 31, 33, 18, 40, 37, 21, 38, 46, 38,
  18, 35, 23, 35, 35, 40, 21, 27, 23, 32,
  // Leviticus
  17, 16, 17, 35, 19, 40, 28, 36, 24, 20,
  47, 8, 59, 57, 33, 34, 16, 30, 37, 27,
  24, 33, 44, 23, 55, 46, 34,
  // Numbers
  54, 34, 51, 49, 31, 27, 89, 26, 23, 36,
  35, 15, 34, 45, 41, 50, 13, 32, 22, 29,
  35, 41, 30, 25, 18, 65, 23, 31, 39, 17,
  54, 42, 56, 29, 34, 13,
  // Deuteronomy
  46, 37, 29, 49, 33, 25, 26, 20, 29, 22,
  32, 32, 18, 29, 23, 22, 20, 22, 21, 20,
  23, 30, 23, 24, 19, 19, 26, 68, 29, 20,
  29, 52, 29, 12,
  // Joshua
  18, 24, 17, 24, 16, 27, 26, 29, 27, 42,
  23, 24, 32, 15, 63, 10, 18, 28, 51, 6,
  43, 34, 16, 33,
  // Judges
  36, 23, 31, 24, 32, 40, 25, 35, 57, 18,
  40, 15, 25, 20, 20, 31, 13, 31, 30, 48,
  25,
  // Ruth
  22, 23, 18, 22,
  // I Samuel
  28, 36, 21, 22, 12, 21, 17, 22, 27, 27,
  15, 25, 23, 52, 35, 23, 54, 29, 24, 42,
  15, 23, 28, 23, 44, 25, 12, 25, 11, 31,
  13,
  // II Samuel
  27, 32, 39, 12, 25, 23, 29, 18, 13, 19,
  27, 31, 39, 33, 37, 23, 29, 33, 43, 26,
  22, 51, 39, 25,
  // I Kings
  53, 35, 28, 34, 18, 36, 51, 66, 28, 29,
  44, 33, 34, 31, 34, 34, 24, 46, 21, 29,
  43, 54,
  // II Kings
  18, 25, 27, 44, 27, 33, 20, 29, 37, 36,
  20, 21, 25, 29, 38, 20, 41, 37, 37, 21,
  26, 20, 37, 20, 30,
  // I Chronicles
  54, 55, 24, 43, 26, 81, 40, 40, 44, 14,
  47, 40, 14, 17, 29, 43, 27, 17, 19, 8,
  30, 19, 32, 31, 31, 32, 34, 21, 30,
  // II Chronicles
  17, 18, 17, 22, 14, 42, 22, 18, 31, 19,
  23, 16, 22, 15, 19, 14, 19, 34, 11, 37,
  20, 12, 21, 27, 28, 23, 9, 27, 36, 27,
  21, 33, 25, 33, 27, 23,
  // I Esdras
  58, 30, 24, 63, 73, 34, 15, 96, 55,
  // Ezra
  11, 70, 13, 24, 17, 22, 28, 36, 15, 44,
  // Nehemiah
  11, 20, 32, 23, 19, 19, 73, 18, 38, 39,
  36, 47, 31,
  // Esther (chapters 11-16 represent the additions, whether identified as chapters 11-16 or additions A-F)
  22, 23, 15, 17, 14, 14, 10, 17, 32, 3,
  0, 0, 0, 0, 0, 0,
  // Judith
  16, 28, 10, 15, 24, 21, 32, 36, 14, 23,
  23, 20, 20, 19, 13, 25,
  // Tobit
  22, 14, 17, 21, 22, 17, 18, 21, 6, 13,
  19, 22, 18, 15,
  // I Maccabees
  64, 70, 60, 61, 68, 63, 50, 32, 73, 89,
  74, 53, 53, 49, 41, 24,
  // II Maccabees
  36, 32, 40, 50, 27, 31, 42, 36, 29, 38,
  38, 45, 26, 46, 39,
  // III Maccabees
  29, 33, 30, 21, 51, 41, 23,
  // IV Maccabees
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  // Psalms
  6, 12, 8, 8, 12, 10, 17, 9, 38, 8,
  8, 6, 7, 5, 11, 15, 50, 14, 9, 13,
  31, 6, 10, 22, 12, 14, 9, 11, 12, 24,
  11, 22, 22, 28, 12, 40, 22, 13, 17, 13,
  11, 5, 26, 17, 11, 9, 14, 20, 23, 19,
  9, 6, 7, 23, 13, 11, 11, 17, 12, 8,
  12, 11, 10, 13, 20, 7, 35, 36, 5, 24,
  20, 28, 23, 10, 12, 20, 72, 13, 19, 16,
  8, 18, 12, 13, 17, 7, 18, 52, 17, 16,
  15, 5, 23, 11, 13, 12, 9, 9, 5, 8,
  28, 22, 35, 45, 48, 43, 13, 31, 7, 10,
  10, 9, 26, 9, 19, 2, 29, 176, 7, 8,
  9, 4, 8, 5, 6, 5, 6, 8, 8, 3,
  18, 3, 3, 21, 26, 9, 8, 24, 13, 10,
  7, 12, 15, 21, 10, 11, 20, 14, 9, 6,
  7,
  // Prayer of Manasses
  0,
  // Proverbs
  33, 22, 35, 27, 23, 35, 27, 36, 18, 32,
  31, 28, 25, 35, 29, 33, 28, 22, 29, 30,
  31, 29, 35, 77, 28, 28, 27, 28, 49, 0,
  0,
  // Ecclesiastes
  18, 26, 22, 17, 19, 11, 30, 17, 18, 20,
  10, 14,
  // Song of Solomon
  17, 17, 11, 16, 17, 12, 13, 14,
  // Job
  22, 13, 26, 21, 27, 30, 21, 22, 35, 22,
  20, 25, 28, 22, 35, 23, 16, 21, 29, 29,
  34, 30, 17, 25, 6, 14, 23, 28, 25, 31,
  40, 22, 33, 37, 16, 33, 24, 41, 35, 27,
  25, 17,
  // Wisdom
  16, 24, 19, 20, 23, 25, 30, 21, 18, 21,
  26, 27, 19, 31, 19, 29, 21, 25, 22,
  // Sirach
  30, 18, 31, 31, 15, 37, 36, 19, 18, 31,
  34, 18, 26, 27, 20, 30, 32, 33, 31, 31,
  28, 27, 27, 34, 26, 29, 30, 26, 28, 31,
  26, 20, 13, 31, 24, 26, 31, 34, 35, 30,
  22, 25, 33, 24, 26, 20, 25, 25, 16, 29,
  30,
  // Psalms of Solomon
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0,
  // Hosea
  11, 25, 5, 19, 15, 12, 16, 14, 17, 15,
  12, 14, 15, 10,
  // Amos
  15, 16, 15, 13, 27, 15, 17, 14, 15,
  // Micah
  16, 13, 12, 13, 15, 16, 20,
  // Joel
  20, 32, 21, 0,
  // Obadiah
  21,
  // Jonah
  16, 11, 10, 11,
  // Nahum
  15, 13, 19,
  // Habakkuk
  17, 20, 19,
  // Zephaniah
  18, 15, 20,
  // Haggai
  14, 24,
  // Zechariah
  21, 13, 11, 14, 11, 15, 14, 23, 17, 12,
  17, 14, 9, 21,
  // Malachi
  14, 17, 18, 6,
  // Isaiah
  31, 21, 26, 6, 30, 13, 25, 22, 21, 34,
  16, 6, 22, 32, 9, 14, 14, 7, 25, 6,
  17, 25, 18, 23, 12, 21, 13, 29, 24, 33,
  9, 20, 24, 17, 10, 22, 38, 22, 8, 31,
  29, 25, 28, 28, 26, 13, 15, 22, 26, 11,
  23, 15, 12, 17, 13, 11, 21, 14, 21, 22,
  11, 12, 19, 12, 25, 24,
  // Jeremiah
  19, 37, 25, 31, 31, 30, 34, 22, 26, 25,
  23, 17, 27, 22, 21, 21, 27, 23, 15, 18,
  14, 30, 40, 10, 19, 28, 46, 64, 22, 33,
  44, 38, 24, 22, 17, 32, 24, 40, 44, 13,
  22, 19, 32, 21, 28, 18, 16, 18, 22, 13,
  35, 34,
  // Baruch
  22, 35, 37, 37, 9,
  // Lamentations
  22, 22, 66, 22, 22,
  // Epistle of Jeremiah
  73,
  // Ezekiel
  28, 10, 27, 17, 17, 14, 27, 18, 11, 22,
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
