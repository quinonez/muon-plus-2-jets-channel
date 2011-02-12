
version=5;
#cd mc
#perl runmc.pl ../mc.txt ../mcnumbers.txt $version
#cd ..
cd periodI
perl run.pl ../data_I.txt I $version
cd ..
cd real
perl run.pl ../data_GH.txt GH $version
perl run.pl ../data_EF.txt EF $version
perl run.pl ../data_AD.txt AD $version



