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

HEADERS  = trig.h

OBJS = trig.o
OBJS += main.o

corra: $(OBJS)
	$(CXX) -o $@ $(OBJS) $(CXXFLAGS) $(LIBS)  

# suffix rule
.C.o: 
	$(CXX) -c $(CXXFLAGS) $<

# clean
clean:
	rm -f *~ *.o *.o~ corra nohup.out

