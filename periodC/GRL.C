#define GRL_cxx
#include "GRL.h"

bool GRL::TieneRunLumiBlock(int R, int l)
{

         if( ( R == 156682 ) && (
         ( l >= 406 && l <= 475 ) ||
         ( l >= 477 && l <= 507 ) ||
         ( l >= 509 && l <= 512 )
      ) ){ return true;}
      
         if( ( R == 155697 ) && (
         ( l >= 264 && l <= 266 ) ||
         ( l >= 268 && l <= 334 ) ||
         ( l >= 336 && l <= 352 ) ||
         ( l >= 354 && l <= 506 )
      ) ){ return true;}
      
         if( ( R == 155678 ) && (
         ( l >= 241 && l <= 308 )
      ) ){ return true;}
      
         if( ( R == 155669 ) && (
         ( l >= 264 && l <= 311 )
      ) ){ return true;}
      
         if( ( R == 155634 ) && (
         ( l >= 147 && l <= 147 ) ||
         ( l >= 149 && l <= 333 )
      ) ){ return true;}
      
         if( ( R == 155569 ) && (
         ( l >= 228 && l <= 467 ) 
      ) ){ return true;}
      
         if( ( R == 155280 ) && (
         ( l >= 360 && l <= 375 )
      ) ){ return true;}
      
         if( ( R == 155228 ) && (
         ( l >= 133 && l <= 148 )
      ) ){ return true;}



}
