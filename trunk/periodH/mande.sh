prun --bexec "make" --exec "corra %IN" --athenaTag=16.0.1 --outputs file.root --outDS user.quinonez.periodH1.2010oct25.V3 \
--inDS user.andreas.SUSYD3PD.data10_7TeV.periodH1.physics_Muons.PhysCont.AOD.t0pro04_v01.V2.1_D2PDSUSY_V1.000614.V1 \
--nFilesPerJob=3 --extFile=root

prun --bexec "make" --exec "corra %IN" --athenaTag=16.0.1 --outputs file.root --outDS user.quinonez.periodH2.2010oct25.V3 \
--inDS user.andreas.SUSYD3PD.data10_7TeV.periodH2.physics_Muons.PhysCont.AOD.t0pro04_v01.V2.1_D2PDSUSY_V1.000614.V1 \
--nFilesPerJob=3 --extFile=root


