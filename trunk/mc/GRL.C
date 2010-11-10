#define GRL_cxx
#include "GRL.h"

bool GRL::TieneRunLumiBlock(int R, int l)
{
         if( ( R == 153159 ) && (
         ( l >= 88 && l <= 104 ) ||
         ( l >= 126 && l <= 176 ) 
      ) ){ return true;}
      
         if( ( R == 153030 ) && (
         ( l >= 120 && l <= 135 ) ||
         ( l >= 141 && l <= 164 ) ||
         ( l >= 186 && l <= 202 ) 
      ) ){ return true;}
      
         if( ( R == 152994 ) && (
         ( l >= 294 && l <= 352 ) 
      ) ){ return true;}
      
         if( ( R == 152933 ) && (
         ( l >= 46 && l <= 172 )
      ) ){ return true;}
      
         if( ( R == 152878 ) && (
         ( l >= 100 && l <= 159 ) ||
         ( l >= 191 && l <= 213 ) 
      ) ){ return true;}
      
         if( ( R == 152845 ) && (
         ( l >= 111 && l <= 134 ) ||
         ( l >= 145 && l <= 169 ) ||
         ( l >= 186 && l <= 349 )
      ) ){ return true;}
      
         if( ( R == 152844 ) && (
         ( l >= 195 && l <= 233 ) 
      ) ){ return true;}
      
         if( ( R == 152777 ) && (
         ( l >= 81 && l <= 299 ) ||
         ( l >= 321 && l <= 329 )
      ) ){ return true;}
      
         if( ( R == 152508 ) && (
         ( l >= 196 && l <= 204 ) ||
         ( l >= 241 && l <= 261 )
      ) ){ return true;}
      
         if( ( R == 152441 ) && (
         ( l >= 317 && l <= 370 ) ||
         ( l >= 372 && l <= 405 ) ||
         ( l >= 411 && l <= 671 )
       ) ){ return true;}
      
         if( ( R == 152409 ) && (
         ( l >= 128 && l <= 209 ) ||
         ( l >= 286 && l <= 716 )
       ) ){ return true;}
      
         if( ( R == 152345 ) && (
         ( l >= 128 && l <= 207 ) 
      ) ){ return true;}
      
         if( ( R == 152221 ) && (
         ( l >= 5 && l <= 167 ) 
      ) ){ return true;}
      
         if( ( R == 152214 ) && (
         ( l >= 159 && l <= 201 )
      ) ){ return true;}
      
         if( ( R == 152166 ) && (
         ( l >= 254 && l <= 300 )
      ) ){ return true;}


  return false;
}
