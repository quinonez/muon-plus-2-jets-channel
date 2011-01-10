#!/usr/bin/perl 
use strict;
use warnings;

# perl run.pl ../data_AD.txt AD 0

my $inputFile = $ARGV[0];
my $period = $ARGV[1];
my $version = $ARGV[2];

my $prefix = "user.quinonez";

open(INPUT, $inputFile) or die("Input file would not open.");
my @toRead =<INPUT>;
my ($sec,$min,$hour,$mday,$mon,$year,$wday,$yday,$isdst) = localtime(time);
my $yymmdd = sprintf "%.2d%.2d%.2d", $year-100, $mon+1,$mday;

my $index = 0;
print @toRead;
foreach my $line (@toRead){
	chomp($line);
	$line =~ s/^\s+|\s+$//g ;
	my $commando = "prun --bexec \"make\" --exec \"corra \%IN\" --outputs file.root --athenaTag=16.3.0 --nFilesPerJob=1 --extFile=root,h --excludeFile=.svn --inDS $line --outDS $prefix.SUSYFILE.muon.$yymmdd.period$period.V$version\n";
	#print "$index";
	print $commando;
	system $commando;
	#print $line;
	$index = $index + 1;
}


#print $prefix;
