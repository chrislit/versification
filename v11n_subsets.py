#!/usr/bin/env python

# Copyright 2013-2014 by Christopher C. Little

import re, sys, os

if len(sys.argv) < 3:
    print 'Usage: ' + sys.argv[0] + ' <v11n name> <canon.h-style file(s)>'
    print
    print 'This script relies on v11nmax.py being present in the same location.'
    print
    print 'This utility takes a number of canon_*.h-style v11n definitions and'
    print '  generates canon.h-style files for each input file combining all'
    print '  of the verses from every file /other than/ the file in question.'
    print
    print 'This is used (via a diff program) to discover when a high maximum'
    print '  verse count is contributed by a single input v11n table.'
    print
    print 'For example, to create the versification system "Max" from the'
    print '  files contained in the directory ./canon, you might invoke:'
    print '      ' + sys.argv[0] + ' Max ./canon/canon*.h'
    print
    exit()

v11n = sys.argv[1]
files = set(sys.argv[2:])

os.system('python ./v11nmax.py ' + ' '.join(sys.argv[1:]))

for f in files:
    of = re.sub(r'^.+/', '', f)
    of = re.sub(r'^canon_?', '', of)
    of = re.sub(r'.h$', '', of)
    of = sys.argv[1]+'-'+of
    cl = 'python ./v11nmax.py ' + of + ' ' + ' '.join(files-set([f]))
    os.system(cl)
