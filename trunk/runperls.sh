version=0;
cd mc
perl runmc.pl ../mc.txt ../mcnumbers.txt $version
cd ..
cd real
perl run.pl ../datamuon.txt ../runnumbersmuon.txt $version

