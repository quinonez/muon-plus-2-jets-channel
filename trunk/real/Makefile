ROOTCFLAGS    = $(shell root-config --cflags)
ROOTLIBS      = $(shell root-config --libs)
ROOTGLIBS     = $(shell root-config --glibs)

CXX           = gcc
CXXFLAGS      = -I$(ROOTSYS)/include -O -Wall -fPIC -g3
LD            = gcc
LDFLAGS      = -O
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


OBJS = AnalysisBase.o
OBJS += Analysis1.o
OBJS += psmain.o
OBJS += GRL.o
OBJS += robustIsEMDefs.o
OBJS += checkOQ.o
OBJS += SmearingClass.o


corra: $(OBJS)
	$(CXX) -o $@ $(OBJS) $(CXXFLAGS) $(LIBS)  

# suffix rule
.C.o: 
	$(CXX) -c $(CXXFLAGS) $<

# clean
clean:
	rm -f *~ *.o *.o~ corra nohup.out

