#!/usr/bin/perl 
use strict;
use warnings;

# perl download.pl MC.txt 

my $inputFile = $ARGV[0];


open(INPUT, $inputFile) or die("Input file would not open.");

my @toRead =<INPUT>;


print @toRead;

for( my $i = 0; $i <= $#toRead; $i++){
	my $DATASET = $toRead[$i];
        chomp($DATASET);
	$DATASET =~ s/^\s+|\s+$//g ;

	my $commando = "dq2-get -f *.root $DATASET\n";
	#print "$index";
	print $commando;
	system $commando;
	#print $line;
}


#print $prefix;
