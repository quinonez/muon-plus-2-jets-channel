#!/usr/bin/perl 
use strict;
use warnings;

# perl run.pl ../data.txt ../runnumbers.txt 0

my $inputFile = $ARGV[0];
my $inputFile1 = $ARGV[1];
my $version = $ARGV[2];

my $prefix = "user.quinonez";

open(INPUT, $inputFile) or die("Input file would not open.");
open(INPUT1, $inputFile1) or die("Input file would not open.");

my @toRead =<INPUT>;
my @toRead1 =<INPUT1>;

my ($sec,$min,$hour,$mday,$mon,$year,$wday,$yday,$isdst) = localtime(time);
my $yymmdd = sprintf "%.2d%.2d%.2d", $year-100, $mon+1,$mday;

print @toRead;

for( my $i = 0; $i <= $#toRead; $i++){
	my $line = $toRead[$i];
        my $runnumber = $toRead1[$i];
	chomp($line);
        chomp($runnumber);
	$line =~ s/^\s+|\s+$//g ;
	$runnumber =~ s/^\s+|\s+$//g ;

	my $commando = "prun --bexec \"make\" --exec \"corra \%IN\" --outputs file.root --athenaTag=16.0.3.5 --nFilesPerJob=1 --extFile=root,h --excludeFile=.svn --inDS $line --outDS $prefix.SUSYFILE.muon.$yymmdd.MC$runnumber.V$version --excludedSite=ANALY_SWT2_CPB,ANALY_LRZ,ANALY_IFAE\n";
	#print "$index";
	print $commando;
	system $commando;
	#print $line;
}

#print $prefix;

#prun --bexec "make" --exec "corra %IN" --outputs file.root --athenaTag=16.3.0 --nFilesPerJob=1 --extFile=root,h --excludeFile=.svn --site=DESY-HH_PHYS-SUSY --inDS mc09_7TeV.105200.T1_McAtNlo_Jimmy.merge.NTUP_SUSY.e510_s765_s767_r1302_r1306_p305/ --outDS user.quinonez.SUSYFILE.muon.110106.150200.V1



