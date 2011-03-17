ROOTCFLAGS    = $(shell root-config --cflags)
ROOTLIBS      = $(shell root-config --libs)
ROOTGLIBS     = $(shell root-config --glibs)

CXX           = gcc
CXXFLAGS      = -I$(ROOTSYS)/include -O2 -Wall -fPIC
LD            = gcc
LDFLAGS      = -O2
SOFLAGS       = -shared

CXXFLAGS     += $(ROOTCFLAGS)
LIBS          = $(ROOTLIBS)
GLIBS         = $(ROOTGLIBS)

HEADERS  = AnalysisBase.h
HEADERS += Analysis1.h
HEADERS += W_From_jj.h
HEADERS += GRL.h
HEADERS += egammaPIDdefs.h
HEADERS += robustIsEMDefs.h
HEADERS += checkOQ.h
HEADERS += SmearingClass.h
HEADERS += egammaSFclass.h
HEADERS += escalas.h


OBJS = AnalysisBase.o
OBJS += escalas.o
OBJS += Analysis1.o
OBJS += psmain.o
OBJS += GRL.o
OBJS += robustIsEMDefs.o
OBJS += checkOQ.o
OBJS += SmearingClass.o
OBJS += egammaSFclass.o


corra: $(OBJS)
	$(CXX) -o $@ $(OBJS) $(CXXFLAGS) $(LIBS)  

# suffix rule
.C.o: 
	$(CXX) -c $(CXXFLAGS) $<

# clean
clean:
	rm -f *~ *.o *.o~ corra nohup.out

