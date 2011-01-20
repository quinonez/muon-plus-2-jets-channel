#define SmearingClass_C

#include "SmearingClass.h"

/** scale parameters rel 15 **/
const double SmearingClass::scale_CB[4] = {1-0.0007, 1-0.001, 1+0.012, 1+0.005};
const double SmearingClass::scaleSyst_CB[4] = {0.0008 , 0.003, 0.004, 0.004};

/** Smearing Parameters rel.15 (Muid) **/
const double SmearingClass::ID_MS[4]       = {0,0,0,0};
const double SmearingClass::ID_AL[4]       = {0.000403,0.000913,0.001273,0.002667};
const double SmearingClass::ID_ALTAN[4]    = {0,0,0,0.0001344};
const double SmearingClass::MS_MS[4]       = {0.02619,0.067,0.0377,0.0324};
const double SmearingClass::MS_AL[4]       = {0.00018,0.00018,0.00018,0.0005};
/** Error for Smearing Parameters rel.15 (Muid) **/
const double SmearingClass::E_ID_MS[4]       = {0,0,0,0};
const double SmearingClass::E_ID_AL[4]       = {0.000038,0.000039,0.000074,0.000050};
const double SmearingClass::E_ID_ALTAN[4]    = {0,0,0,0.0000060};
const double SmearingClass::E_MS_MS[4]       = {0.00087,0.0013,0.0027,0.0099};
const double SmearingClass::E_MS_AL[4]       = {0.00004,0.00018,0.00018,0.0002};
/** sist error **/
const double SmearingClass::S_ID_MS[4]       = {0,0,0,0};
const double SmearingClass::S_ID_AL[4]       = {0.000016,0.000047,0.000011,0.000001};
const double SmearingClass::S_ID_ALTAN[4]    = {0,0,0,0};
const double SmearingClass::S_MS_MS[4]       = {0.0004,0.00259,0.00036,0.00188};
const double SmearingClass::S_MS_AL[4]       = {0.,0.,0.,0.};

/** MC Parameters rel.15 (Muid) **/
const double SmearingClass::MC_ID_MS[4]    = {0.016,0.026,0.034,0.048};
const double SmearingClass::MC_ID_AL[4]    = {0.00029,0.0003,0.00042,0.00094};
const double SmearingClass::MC_ID_ALTAN[4] = {0,0,0,0.000063};
const double SmearingClass::MC_MS_CALO[4]  = {0.23,0,0,0.17};
const double SmearingClass::MC_MS_MS[4]    = {0.027,0.054,0.033,0.027};
const double SmearingClass::MC_MS_AL[4]    = {0.00013,0.00023,0.000093,0.000074};
/***********************************/
/** Correlations   p1p2,p1p3,p2p3 **/ 
const double SmearingClass::CorrMat[4][3] = { {0.248,-0.878,-0.493},
					      {-0.698,-0.157,-0.200},
					      {-0.299,-0.732,-0.024},
					      {-0.818,-0.421,-0.051}};

const double SmearingClass::CorrMatTan[4][3] = { {0.248,-0.878,-0.493},
						 {-0.698,-0.157,-0.200},
						 {-0.299,-0.732,-0.024},
						 {-0.747,-0.294,-0.159}};

