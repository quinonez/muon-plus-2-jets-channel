#ifndef GRL_h
#define GRL_h

#include <TLorentzVector.h>
//#include <TObject.h>

//class W_From_jj : public TObject
class GRL
{
  public:

    GRL()
    { }


    ~GRL()
    {}

    bool TieneRunLumiBlock(int,int);
};

#endif
