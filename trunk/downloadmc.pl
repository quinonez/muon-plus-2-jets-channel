#!/usr/bin/perl 
use strict;
use warnings;

# perl run.pl ../mcnumbers.txt 

my $inputFile = $ARGV[0];


open(INPUT, $inputFile) or die("Input file would not open.");

my @toRead =<INPUT>;


print @toRead;

for( my $i = 0; $i <= $#toRead; $i++){
	my $mccode = $toRead[$i];
        chomp($mccode);
	$mccode =~ s/^\s+|\s+$//g ;

	my $commando = "dq2-get -f *.root user.saolivap.SUSYFILE.muon.110105.$mccode.V0/\n";
	#print "$index";
	print $commando;
	system $commando;
	#print $line;
}


#print $prefix;
