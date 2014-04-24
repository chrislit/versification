#!/usr/bin/env python

# Copyright 2013-2014 by Christopher C. Little

import re, sys

files = sys.argv[1:]

if not files:
    print 'Usage: ' + sys.argv[0] + ' <canon.h-style file(s)>'
    exit()

for fn in files:
    f = open(fn).readlines()

    booksChapters = 0
    vmChapters = 0

    inBooks = False
    inVm = False

    for l in f:
        # This is not robust. It assumes that [on]tbooks[] precedes vm[] and
        # that all of the verse counts in vm[] are part of books listed in
        # [on]tbooks[]. In general, it assumes canon files that look like what
        # we include in the library and generate from v11nsys.pl.

        l = re.sub(r'//.*', '', l)
        l = re.sub(r'\s*$', '', l)
        
        if l:        
            if re.search(r'struct sbook [on]tbooks.*?\[\]', l):
                inBooks = True
            elif re.search(r'int vm.*?\[\]', l):
                inVm = True
            elif (inVm or inBooks) and re.search(r'};', l):            
                inBooks = False
                inVm = False
            elif inBooks:
                match = re.search(r'{".+?", ".+?", ".+?", (\d+)},', l)
                if match:
                    booksChapters += int(match.group(1))
            elif inVm:
                match = re.findall(r'\d+,?', l)
                vmChapters += len(match)
                
    print fn + ' is ' + ('' if booksChapters == vmChapters else 'not ') + 'valid: ' + str(booksChapters) + ':' + str(vmChapters)
