#!/usr/bin/perl

# Copyright 2009-2014 by Christopher C. Little

if (@ARGV[0] eq "") {
    print "This is an /extremely/ rudimentary utility for exporting a v11n definition (canon.h-type) file into a list of verses contained in that v11n.\nIt takes one mandatory argument: a canon.h-type file.\nIt can take two additional arugments.\nIf one of them is \"osis\" the output will be an OSIS file.\nThe other optional argument will be used as the name of the output file.";
    exit();
}

open (INF, @ARGV[0]);

$name = "v11n";
if (@ARGV[1] ne "") {
    $arg = @ARGV[1];
    if ($arg =~ /^osis$/i) {
	$osis = true;
    }
    else {
	$name = $arg;
    }
    if (@ARGV[2] ne "") {
	$arg = @ARGV[2];
	if ($arg =~ /osis/i && $osis == false) {
	    $osis = true;
	}
	else {
	    $name = $arg;
	}
    }
}

if ($osis) {
    open (OUTF, ">$name.osis.xml");
}
else {
    open (OUTF, ">$name.imp");
}

$mode = 0;

while (<INF>) {
    $line = $_;
    if ($line =~ /struct\s+sbook/) {
	$mode = 1;
    }
    elsif ($line =~ /int\s+vm/) {
	$mode = 2;
    }
    else {
	if ($mode == 1) {
	    if ($line =~ /{\".+?\", \".+?\", \"(.+?)\", (\d+)}/) {
		$book{$1} = $2;
		push @bookList, $1;
	    }
	}
	if ($mode == 2) {
	    if ($line =~ /^([\s\d,]+)$/) {
		$vssList .= "$1, ";
	    }
	}
    }
}

$vssList =~ s/\s*//g;
$vssList =~ s/,,/,/g;

if ($osis) {
    print OUTF "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<osis xmlns=\"http://www.bibletechnologies.net/2003/OSIS/namespace\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xsi:schemaLocation=\"http://www.bibletechnologies.net/2003/OSIS/namespace http://www.bibletechnologies.net/osisCore.2.1.1.xsd\">\n<osisText osisRefWork=\"Bible\" xml:lang=\"en\" osisIDWork=\"Bible.canondemo\">\n<header>\n<work osisWork=\"Bible.canondemo\"/>\n</header>\n";
}


while (@bookList != ()) {
    if ($osis && $thisBook ne "") {
	print OUTF "<\/chapter>\n";
	print OUTF "<\/div>\n";
    }
    
    $thisBook = shift @bookList;
    $cmax = $book{$thisBook};
    $thisChap = 0;

    if ($osis) {
	print OUTF "<div type=\"book\" osisID=\"$thisBook\">\n";
    }
    
    while ($thisChap < $cmax) {
	if ($osis && $thisChap != 0) {
	    print OUTF "<\/chapter>\n";
	}
	
	$thisChap++; 	

	if ($osis) {
	    print OUTF "<chapter osisID=\"$thisBook\.$thisChap\">\n";
	}

	$vssList =~ s/^(\d+),//;
	$vmax = $1;
	$thisVers = 0;
	    
	while ($thisVers < $vmax) {
	    $thisVers++;
	    
	    if ($osis) {
		print OUTF "<verse osisID=\"$thisBook\.$thisChap\.$thisVers\">\n$thisBook.$thisChap.$thisVers\n<\/verse>\n";
	    }
	    else {
		print OUTF "\$\$\$$thisBook $thisChap:$thisVers\n$thisBook.$thisChap.$thisVers\n";
	    }
	}
    }
}

if ($osis) {
    print OUTF "<\/chapter>\n";
    print OUTF "<\/div>\n";
    print OUTF "<\/osisText>\n";
    print OUTF "<\/osis>\n";
}
