#ifndef W_From_jj_h
#define W_From_jj_h

#include <TLorentzVector.h>
//#include <TObject.h>

//class W_From_jj : public TObject
class W_From_jj
{
  public:

    W_From_jj( TLorentzVector mm4, double ddrjj)
    {
      SETO( mm4, ddrjj );
    }


    ~W_From_jj()
    {}

    void SETO(TLorentzVector m4, double drjj)
    {
      momentum4 = m4;
      DRjj = drjj;  
    }

    TLorentzVector GETP4() const
    {
      return momentum4;
    }

 
    double GETDELTAR_jj() const
    {
      return DRjj;
    }

    //inline W_From_jj& operator = (const W_From_jj &);

  private:

    TLorentzVector momentum4;
    double DRjj;

};

#endif
