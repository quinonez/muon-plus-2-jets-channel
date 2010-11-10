#ifndef robustIsEMDefs_h
#define robustIsEMDefs_h

class robustIsEMDefs
{
  public:

  robustIsEMDefs()
  {}

  ~robustIsEMDefs()
  {}  


  bool isRobustLoose(long isEM, float eta, float eT, float Reta, float w2 );
  bool isRobustMedium(long isEM, float eta, float eT, float Reta, float w2 );
  bool isRobusterTight(long isEM, bool expectBLayer, float eta, float eT, float Reta, float w2 );


};


#endif
