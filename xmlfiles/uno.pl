#!/usr/bin/env perl
use strict;
use warnings;


#susyAB.11june.xml
#susyC.19jun.xml
#susyD.28jul.xml
#susyE.28aug.xml
#susyF.3sep.xml


#open(my $in, "<", "susyAB.11june.xml") or die "Can't open test.xml: $!";
#open(my $in, "<", "susyC.19jun.xml") or die "Can't open test.xml: $!";
#open(my $in, "<", "susyD.28jul.xml") or die "Can't open test.xml: $!";
#open(my $in, "<", "susyE.28aug.xml") or die "Can't open test.xml: $!";
#open(my $in, "<", "susyF.3sep.xml") or die "Can't open test.xml: $!";
#open(my $in, "<", "susyG.14oct.xml") or die "Can't open test.xml: $!";
open(my $in, "<", "susyH.26oct.xml") or die "Can't open test.xml: $!";

while(<$in>) {
  s/"\/>/ ) ||/;
  s/<Run>/if( ( R == /g;
  s/<\/Run>/ \) && \(/;
  s/<LBRange Start="/( l >= /g;
  s/" End="/ && l <= /g;
  s/<\/LumiBlockCollection>/false ) ){ return true;}/g;

  s/<LumiBlockCollection>//g;
  s/<\/NamedLumiRange>//g;
  s/<\/LumiRangeCollection>//g;

  print "$_";
}  

close $in or die "$in: $!";
