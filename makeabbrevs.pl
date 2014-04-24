#!/usr/bin/perl

# Copyright 2009-2014 by Christopher C. Little

# $finalBook = "Rev"; # quit reading canon files after we reach this book (an OSIS id)-- this is a temporary measure for 1.6.0, since we don't support any apocrypha yet anyway

# @canons will contain this list of files, these are in a basic XML format.
# Each file lists osisIDs along with the English names associated with the
# osisID. These aren't exhaustive, and may or may not overlap (but hopefully
# don't). We are only using these to load mappings from osisIDs.
@canons = (
    "canon.bible.xml",      # the Bible, broadly defined
#    "canon.af.xml",         # Apostolic Fathers
#    "canon.otp.xml",        # OT pseudepigrapha
#    "canon.nta.xml",        # NT apocrypha
#    "canon.lds.xml",        # Mormon books
#    "canon.naghammadi.xml", # Nag Hammadi Library
#    "canon.qumran.xml",     # Qumran mss
#    "canon.classical.xml",  # intended for classical works, currently just Josephus
);

@abbrevsQueue = (); 

if ($finalBook eq "") {
    $finalBook = "\#PARSE ALL BOOKS\#";
}
 
foreach $mapfile (@canons) {
    open MAP, "$mapfile";
    while (<MAP>) {
	$line = $_;
	
	$line =~ s/<!\-\-.+?\-\->//g;
	$line =~ s/\&amp;/\&/g;

	if ($line =~ /<id>(.+?)<\/id>/) {
	    if ($id eq $finalBook) {
		last;
	    }
	    $id = $1;
	    $osis{lc($id)} = $id;
	    push @abbrevsQueue, uc($id);
	}
	elsif ($line =~ /<name>(.+?)<\/name>/) {
	    $name = $1;
	    if ($osis{lc($name)} eq "") {
		$osis{lc($name)} = $id;
		push @abbrevsQueue, uc($name);
	    }
	    else {
		if ($warn) {
		    print "ERROR: Duplicate mapping from $id found in $mapfile.\n";
		}
	    }

	    if ($idmap{$id} eq "") {
		$idmap{$id} = $name;
	    }
	    else {
		# Duplicates most likely indicate alternate names, so ignore them.
		if ($warn) {
		    print "ERROR: Duplicate mapping from $id found in $mapfile.\n";
		}
	    }
	}
    }
    close (MAP);
}

$abbrevs = "/******************************************************************************\n * canon_abbrevs.h - Canonical text information to be included by VerseKey.cpp\n *\n * Copyright 1998-2014\n * This program is free software; you can redistribute it and/or modify it\n * under the terms of the GNU General Public License as published by the\n * Free Software Foundation version 3.\n *\n * This program is distributed in the hope that it will be useful, but\n * WITHOUT ANY WARRANTY; without even the implied warranty of\n * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU\n * General Public License for more details.\n *\n */\n\n#ifndef CANON_ABBREVS_H\n#define CANON_ABBREVS_H\n\nSWORD_NAMESPACE_START\n\n\n/******************************************************************************\n *	Abbreviations - MUST be in alphabetical order & by PRIORITY\n *		RULE: first match of entire key\n *			(e.g. key: \"1CH\"; match: \"1CHRONICLES\")\n */\n\nconst struct abbrev builtin_abbrevs\[\] = {\n";

@abbrevsQueue = sort @abbrevsQueue;
foreach $a (@abbrevsQueue) {
    if ($a =~ /^.+\d/) {
	$abbrevs .= "//";
    }
    $abbrevs .= "  {\"" . $a . "\", \"" . $osis{lc($a)} . "\"},\t\t// " . $idmap{$osis{lc($a)}} . "\n";
}
$abbrevs .= "  {\"\", \"\"}\n};\n\n\nSWORD_NAMESPACE_END\n\n\n#endif\n";

open OUTF, ">canon_abbrevs.h";
print OUTF $abbrevs;
close OUTF;
