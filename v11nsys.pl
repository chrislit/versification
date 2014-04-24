#!/usr/bin/perl

# Copyright 2009-2014 by Christopher C. Little

###############################################################################
# 
# versification (v11n) system .h file generator:
# processes various file types, including VPL, IMP, OSIS, & CCEL's
# versification XML files (see http://www.ccel.org/refsys/refsys.html)
# and generates a C++ header file for use in the Sword project
#
###############################################################################


$mode = "osis";
$count = "last";
$aMode = "";
$warn = 1;

($sec,$min,$hour,$mday,$mon,$year,$wday,$yday,$isdst) = localtime(time);

if (@ARGV[0] ne "") {
    $n = 0;
    while (@ARGV[$n] ne "") {
	if (@ARGV[$n] eq "--vpl") {
	    $mode = "vpl";
	    print "Set interpretation mode to VPL.\n";
	}
	elsif (@ARGV[$n] eq "--imp") {
	    $mode = "imp";
	    print "Set interpretation mode to IMP.\n";
	}
	elsif (@ARGV[$n] eq "--osis") {
	    $mode = "osis";
	    print "Set interpretation mode to OSIS.\n";
	}
	elsif (@ARGV[$n] eq "--xml") {
	    $mode = "xml";
	}
	elsif (@ARGV[$n] eq "--count") {
	    $count = "count";
	    print "Set count mode to last.\n";
	}
	elsif (@ARGV[$n] eq "--last") {
	    $count = "last";
	}
	elsif (@ARGV[$n] eq "--nowarn") {
	    $warn = 0;
	    print "Warning messages disabled.\n";
	}
	elsif (@ARGV[$n] =~ /--abbr=(.+)/) {
	    $aMode = $1;
	    print "Set abbreviation mode to \"$aMode\".\n";
	}
	elsif (@ARGV[$n] =~ /^\-+(h|\?|usage)/) {
	    printUsage();
	    exit();
	}
	else {
	    push @srcfiles, @ARGV[$n];
	}
	$n++;
    }
}
if ($mode eq "xml") {
    print "Set interpretation mode to CCEL XML.\n";
}
if ($count eq "last") {
    print "Set count mode to last.\n";
}

if (@srcfiles == 0) {
    printUsage();
    exit();
}

sub buildBooksArrays {
    if ($lastBook ne "" && $osis{lc($lastBook)} eq "") {
	print "ERROR: Unknown book abbreviation: $lastBook in $v11n\n";
    }
    if ($osis{lc($lastBook)} eq "Matt") {
	$otnt = 1;
    }

    $osisBook = $osis{lc($lastBook)};
    if ($count eq "count") {
	$cval = $cCount;
    }
    else {
	$cval = $lastChap;
    }
    if ($otnt == 0) {
	$otbooks .= "  {\"$idmap{$osisBook}\", \"$osisBook\", \"$osisBook\", $cval},\n";
    }
    else {
	$ntbooks .= "  {\"$idmap{$osisBook}\", \"$osisBook\", \"$osisBook\", $cval},\n";
    }
    $bookOrder .= " $osisBook";
    if ($warn == 1) {
	if ($cCount ne $lastChap) {
	    print "WARNING: chapter count ($cCount) does not equal last chapter ($lastChap) in book $osisBook of versification $v11n ($infile).\n";
	}
    }
}

sub printUsage() {
    print " v11nsys.pl --? --nowarn --(vpl|imp|xml|osis) --(count|last) --abbr=[abbrMode] [files]\n\n  When run without any arguments, this script looks for the CCEL files: Bible.*.xml.\n\n  Otherwise, supply the script with a list of files (or wildcard) and it  will attempt to create a v11n system definition on that basis.\n\n --? prints usage (this).\n\n --nowarn turns warning messages off.\n\n --vpl instructs the script to interpret files as VPL files.\n --imp instructs the script to interpret files as IMP files.\n --xml instructs the script to interpret files as XML files using CCEL's definition format (default).\n --osis instructs the script to interpret files as OSIS XML files.\n\n --count instructs the script to count chapters/verse it encounters.\n --last instructs the script to assume that the last chapter/verse it encounters is equal to the number of chaptes/verses in a book/chapter (default).\n\n --abbr=[abbrMode] instructs the script to use an alternative set of abbreviations (olb, westminster, & lxx are currently defined) in preference to the default, whenever the two conflict.\n\n";
}

# @canons will contain this list of files, these are in a basic XML format.
# Each file lists osisIDs along with the English names associated with the
# osisID. These aren't exhaustive, and may or may not overlap (but hopefully
# don't). We are only using these to load mappings from osisIDs.
@canons = (
    "canon.bible.xml",      # the Bible, broadly defined
    "canon.af.xml",         # Apostolic Fathers
    "canon.otp.xml",        # OT pseudepigrapha
    "canon.nta.xml",        # NT apocrypha
    "canon.lds.xml",        # Mormon books
    "canon.naghammadi.xml", # Nag Hammadi Library
    "canon.qumran.xml",     # Qumran mss
    "canon.classical.xml",  # intended for classical works, currently just Josephus
);

foreach $mapfile (@canons) {
    open MAP, "$mapfile";
    while (<MAP>) {
	$line = $_;
	
	$line =~ s/<!\-\-.+?\-\->//g;
	$line =~ s/\&amp;/\&/g;

	if ($line =~ /<id>(.+?)<\/id>/) {
	    $id = $1;
	    $osis{lc($id)} = $id;
	    $abbrevs{lc($id)} = "$id;"
	}
	elsif ($line =~ /<abbr mode=\"([^\"]+)\">(.+?)<\/abbr>/) {
	    if ($aMode eq $1) {
		$name = $2;
		if ($osis{lc($name)} ne "") {
		    if ($warn == 1) {
			print "WARNING: Duplicate mapping from $name found in $mapfile (<abbr mode=\"\">). Overwriting.\n";
		    }
		}
		$osis{lc($name)} = $id;
	    }
	}
	elsif ($line =~ /<abbr>(.+?)<\/abbr>/) {
	    $name = $1;
	    if ($osis{lc($name)} eq "") {
		$osis{lc($name)} = $id;
	    }
	    else {
		if ($osis{lc($name)} ne $id) {
		    if ($warn == 1) {
			print "WARNING: Duplicate mapping from $name found in $mapfile (<abbr>).\n";
		    }
		}
	    }
	}
	elsif ($line =~ /<name>(.+?)<\/name>/) {
	    $name = $1;
	    if ($osis{lc($name)} eq "") {
		$osis{lc($name)} = $id;
		$abbrevs{lc($id)} .= "$name;"
	    }
	    else {
		if ($osis{lc($name)} ne $id) {
		    if ($warn == 1) {
			print "WARNING: Duplicate mapping from $name found in $mapfile (<name>).\n";
		    }
		}
	    }

	    # Always assign the first <name> value here, which should always be the Sword name of the book; ignore all subsequent <name>s.
	    if ($idmap{$id} eq "") {
		$idmap{$id} = $name;
	    }
	}
    }
    close (MAP);
}

foreach $infile (@srcfiles) {
    if ($infile =~ /^Bible.+xml$/) {
	$infile =~ /^Bible(\.(.+))?\.xml/;
	$v11n = $2;
	if ($v11n eq "") {
	    $v11n = "NRSVA";
	}
    }
    else {
	$v11n = $infile;
	$v11n =~ s/\.[^\.]*$//;
	$v11n =~ s/^.+\///;
    }
    $outfile = lc("canon_$v11n.h");

    print "Processing $infile --> $outfile (v11n: $v11n).\n";

    open INF, $infile;
    open OUTF, ">$outfile";

    print OUTF "/******************************************************************************\n * $outfile - Versification data for the $v11n system\n *\n * Copyright " . ($year+1900) . "\n * This program is free software; you can redistribute it and/or modify it\n * under the terms of the GNU General Public License as published by the\n * Free Software Foundation version 3.\n *\n * This program is distributed in the hope that it will be useful, but\n * WITHOUT ANY WARRANTY; without even the implied warranty of\n * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU\n * General Public License for more details.\n */\n";
    print OUTF "\n#ifndef CANON_" . uc($v11n) . "_H\n#define CANON_" . uc($v11n) . "_H\n\nSWORD_NAMESPACE_START\n\n\n";

    $thisBook = "";
    $thisChap = "";
    $thisVers = "";

    $bCount = 0;
    $cCount = 0;
    $vCount = 0;
    
    $abbrevs = "/******************************************************************************\n *	Abbreviations - MUST be in alphabetical order & by PRIORITY\n *		RULE: first match of entire key\n *			(e.g. key: \"1CH\"; match: \"1CHRONICLES\")\n */\n\nconst struct abbrev builtin_abbrevs_" . lc($v11n) . "\[\] = {\n";
    $abbrevsCloser = "  {\"\", \"\"}\n};\n\n\n";
    $abbrevsList = "";

    $vm = "/******************************************************************************\n *	Maximum verses per chapter\n */\n\nint vm_" . lc($v11n) . "\[\] = {";
    $otbooks = "/******************************************************************************\n * [on]tbooks_" . lc($v11n) . " - initialize static instance for all canonical\n *		 text names and chapmax\n */\nstruct sbook otbooks_" . lc($v11n) . "\[\] = {\n";
    $ntbooks = "struct sbook ntbooks_" . lc($v11n) . "\[\] = {\n";
    $booksCloser = "  {\"\", \"\", \"\", 0}\n};\n\n";
    
    $bookOrder = "// Book order:";

    $otnt = 0; # 0 = ot, 1 = nt
    
    $idList = "";
    if ($mode eq "osis") {
	while (<INF>) {
	    $line = $_;
	    $line =~ s/<verse([^>]+)(osisID=\"[^\"]+\")/$idList .= "$2\n";/eg;
	}

	close (INF);

	open (TMP, ">tempfile");
	print TMP $idList;
	close (TMP);

	open (INF, "tempfile");
    }

    while (<INF>) {
	$line = $_;
		
	$osisID = "";

	if ($line =~ /<osisID.+?code=\"([^\"]+?)\"\/>/) {
	    $osisID = $1;
	}
	elsif ($mode eq "vpl" && $line =~ /^([^:]+?) ([0-9A-Za-z]+):([0-9A-Za-z]+)/) {
	    $osisID = "$1.$2.$3";
	}
	elsif ($mode eq "imp" && $line =~ /^\$\$\$([^:]+?) ([0-9A-Za-z]+):([0-9A-Za-z]+)/) {
	    $osisID = "$1.$2.$3";
	}
	elsif ($mode eq "osis" && $line =~ /osisID=\"([^\"]+)\"/) {
	    $osisID = $1;
	}
	
	if ($osisID =~ /\.0(\.|$)/) { # in the case of chap/verse 0
	    $osisID = "";
	}
	
	if ($osisID ne "") {
	    $lastBook = $thisBook;
	    $lastChap = $thisChap;
	    $lastVers = $thisVers;
	    
	    $osisID =~ /([^\.]+)\.([a-zA-Z\d]+)\.([a-zA-Z\d]+)/;
	    
	    $thisBook = $1;
	    $thisChap = $2;
	    $thisVers = $3;
	    
	    if ((($thisBook ne $lastBook) || ($thisChap ne $lastChap)) && $lastVers ne "") {
		if ($count eq "count") {
		    $vm .= "$vCount, ";
		}
		else {
		    $vm .= "$lastVers, ";
		}
		if ($warn == 1) {
		    if ($vCount ne $lastVers) {
			print "WARNING: verse count ($vCount) does not equal last verse ($lastVers) in chapter $osis{lc($lastBook)} $lastChap of versification $v11n ($infile).\n";
		    }
		}
	    }
	    
	    if ($thisBook ne $lastBook) {
		$bCount++;
		$vm .= "\n  // $idmap{$osis{lc($thisBook)}}\n  ";
		$abbrevsList .= $abbrevs{lc($osis{lc($thisBook)})};
		
		if ($lastBook ne "") {
		    buildBooksArrays{};
		}
		$cCount = 1;
		$vCount = 1;
	    }
	    elsif ($thisChap ne $lastChap) {
		$cCount++;
		$vCount = 1;
	    }
	    elsif ($thisVers ne $lastVers) {
		$vCount++;
	    }
	}
    }
    if ($count eq "count") {
	$vm .= "$vCount";
    }
    else {
	$vm .= "$thisVers";
    }
    $vm .= "\n};\n";
    $vm =~ s/((\d+, ){10})(?=\d+,)/\1\n  /g;

    if ($warn == 1) {
	if ($vCount ne $thisVers) {
	    print "WARNING: verse count ($vCount) does not equal last verse ($thisVers) in chapter $osis{lc($lastBook)} $lastChap of versification $v11n ($infile).\n";
	}
    }

    buildBooksArrays();
    $otbooks .= $booksCloser;
    $ntbooks .= $booksCloser;
    
    $abbrevsList = lc($abbrevsList);
    @abbrevsQueue = (); 
    while ($abbrevsList =~ /^(.+?);/) {
	push @abbrevsQueue, $1;
	$abbrevsList =~ s/^(.+?);//;
    }
    @abbrevsQueue = sort @abbrevsQueue;
    foreach $a (@abbrevsQueue) {
	$abbrevs .= "  {\"" . uc($a) . "\", \"" . $osis{lc($a)} . "\"},\t\t// " . $idmap{$osis{lc($a)}} . "\n";
    }
    $abbrevs .= $abbrevsCloser;



    print OUTF "// Versification system: $v11n\n";
    print OUTF "$bookOrder\n\n";
    
    print OUTF $otbooks;
    print OUTF $ntbooks;
#    print OUTF $abbrevs;  # line disabled so that we don't print out replacement builtin_abbrev line
    print OUTF $vm;
    
    print OUTF "\n\nSWORD_NAMESPACE_END\n\n\n#endif\n";
    
    close (INF);
    close (OUTF);
    unlink("tempfile");
}
