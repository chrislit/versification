#!/usr/bin/env python

# Copyright 2013-2014 by Christopher C. Little

import re, sys
from collections import Counter
import datetime

if len(sys.argv) < 3:
    print 'Usage: ' + sys.argv[0] + ' <v11n name> <canon.h-style file(s)>'
    print
    print 'This utility takes a number of canon_*.h-style v11n definitions and'
    print '  combines them into a single larger v11n system that maximizes the'
    print '  chapters-per-book and verses-per-chapter present within its'
    print '  constituent v11ns. Book order is determined by the order in which'
    print '  the script encounters each Bible book.'
    print
    print 'For example, to create the versification system "Max" from the'
    print '  files contained in the directory ./canon, you might invoke:'
    print '      ' + sys.argv[0] + ' Max ./canon/canon*.h'
    print
    exit()

v11n = sys.argv[1]
files = sys.argv[2:]

bible = dict()
NTbookList = list()
OTbookList = list()
bookName = dict()

for fn in files:
    f = open(fn).readlines()

    inBooks = False
    inVm = False
    
    vmArray = list()
    localOTbookList = list()
    localNTbookList = list()

    for l in f:
        # This is not robust. It assumes that [on]tbooks[] precedes vm[] and
        # that all of the verse counts in vm[] are part of books listed in
        # [on]tbooks[]. In general, it assumes canon files that look like what
        # we include in the library and generate from v11nsys.pl.

        l = re.sub(r'//.*', '', l)
        l = re.sub(r'\s*$', '', l)
        
        if l:        
            if re.search(r'struct sbook otbooks.*?\[\]', l):
                inBooks = 1
            if re.search(r'struct sbook ntbooks.*?\[\]', l):
                inBooks = 2
            elif re.search(r'int vm.*?\[\]', l):
                inVm = True
            elif (inVm or inBooks) and re.search(r'};', l):            
                inBooks = False
                inVm = False
            elif inBooks:
                match = re.search(r'{"(.+?)", "(.+?)", ".+?", (\d+)},', l)
                if match:
                    id = match.group(2)
                    name = match.group(1)
                    if id not in OTbookList and id not in NTbookList:
                        if (inBooks == 1):
                            OTbookList.append(id)
                        else:
                            NTbookList.append(id)
                        bookName[id] = name
                        bible[id] = Counter()
                    if inBooks == 1:
                        localOTbookList.append((id, int(match.group(3))))
                    else:
                        localNTbookList.append((id, int(match.group(3))))
            elif inVm:
                vmArray.append(re.findall(r'(\d+),?', l))

    vmArray = sum(vmArray, [])
    vmArray = map(int, vmArray)
    #print localOTbookList
    #print localNTbookList
    #print vmArray

    for book,chapters in localOTbookList + localNTbookList:
        #print book,chapters
        for c in range(chapters):
            # update the master dictionary with the max of its current value
            # and the verse count for that chapter in the current v11n
            bible[book][c+1] = max(bible[book][c+1], vmArray.pop(0))
            

canonMax = open('canon_' + v11n.lower() + '.h', 'w')

# print header stuff
canonMax.write('/******************************************************************************\n')
canonMax.write(' *\n')
canonMax.write(' *  canon_' + v11n.lower() + '.h - Versification data for the ' + v11n + ' system\n')
canonMax.write(' *\n')
canonMax.write(' * $Id: v11nmax.py 467 2013-08-02 13:10:47Z chrislit $\n')
canonMax.write(' *\n')
canonMax.write(' * Copyright '+str(datetime.date.today().year)+'\n')
canonMax.write(' *\n')
canonMax.write(' * This program is free software; you can redistribute it and/or modify it\n')
canonMax.write(' * under the terms of the GNU General Public License as published by the\n')
canonMax.write(' * Free Software Foundation version 3.\n')
canonMax.write(' *\n')
canonMax.write(' * This program is distributed in the hope that it will be useful, but\n')
canonMax.write(' * WITHOUT ANY WARRANTY; without even the implied warranty of\n')
canonMax.write(' * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU\n')
canonMax.write(' * General Public License for more details.\n')
canonMax.write(' */\n')
canonMax.write('\n')
canonMax.write('#ifndef CANON_' + v11n.upper() + '_H\n')
canonMax.write('#define CANON_' + v11n.upper() + '_H\n')
canonMax.write('\n')
canonMax.write('SWORD_NAMESPACE_START\n')
canonMax.write('\n')
canonMax.write('\n')
canonMax.write('// Versification system: ' + v11n + '\n')
canonMax.write('// Book order: ' + ' '.join(OTbookList + NTbookList) + '\n')
canonMax.write('\n')
canonMax.write('\n')

# print otbooks and ntbooks
canonMax.write('/******************************************************************************\n')
canonMax.write(' * [on]tbooks_' + v11n.lower() + ' - initialize static instance for all canonical\n')
canonMax.write(' *		 text names and chapmax\n')
canonMax.write(' */\n')

if OTbookList:
    canonMax.write('struct sbook otbooks_' + v11n.lower() + '[] = {\n')

    for book in OTbookList:
        canonMax.write('  {"' + bookName[book] + '", "' + book + '", "' + book + '", ' + str(len(bible[book])) + '},\n')

    canonMax.write('  {"", "", "", 0}\n')
    canonMax.write('};\n')
    canonMax.write('\n')

if NTbookList:
    canonMax.write('struct sbook ntbooks_' + v11n.lower() + '[] = {\n')

    for book in NTbookList:
        canonMax.write('  {"' + bookName[book] + '", "' + book + '", "' + book + '", ' + str(len(bible[book])) + '},\n')

    canonMax.write('  {"", "", "", 0}\n')
    canonMax.write('};\n')
    canonMax.write('\n')


# print vm
canonMax.write('/******************************************************************************\n')
canonMax.write(' *	Maximum verses per chapter\n')
canonMax.write(' */\n')
canonMax.write('int vm_' + v11n.lower() + '[] = {\n')

for book in OTbookList + NTbookList:
    canonMax.write('  // ' + bookName[book] + '\n')
    verseCountList = list()
    for ch in range(1, len(bible[book])+1):
        verseCountList.append(bible[book][ch])
    verseCountString = ', '.join(map(str, verseCountList))
    verseCountString = re.sub(r'(([0-9]+, ){9}[0-9]+,) ', r'\1\n  ', verseCountString)
    canonMax.write('  ' + verseCountString + ',\n')

canonMax.write('};\n')
canonMax.write('\n')

# print footer stuff
canonMax.write('SWORD_NAMESPACE_END\n')
canonMax.write('#endif\n')
