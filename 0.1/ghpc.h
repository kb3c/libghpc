/* ghpc.h
 * libghpc main include header - C
 * 
 * Copyright (c) 2014-2016, polarysekt
 */


#ifndef ghpcinc_ghpc_h__
#  define ghpcinc_ghpc_h__

#ifndef ghRET
typedef int ghRET;
#endif

typedef unsigned char ghpcCARD;


typedef struct t_ghDECK {
  unsigned int 	cx;
  ghpcCARD*	deck;
} ghpcDECK;

char		ghpcCardGetSuitA( ghpcCARD c );
char* 		ghpcCardGetSuitU( ghpcCARD c );
ghpcCARD 	ghpcCardGetSuitN( ghpcCARD c );

char		ghpcCardGetValueA( ghpcCARD c );
ghpcCARD	ghpcCardGetValueN( ghpcCARD c );

ghpcDECK*	ghpcDeckCreate(  unsigned char nDecks );
ghRET		ghpcDeckDestroy( ghpcDECK* pd );

ghRET		ghpcDeckShuffle( ghpcDECK* pd );

ghpcCARD		ghpcDeckGetCard( ghpcDECK* pd );
ghpcCARD		ghpcDeckPeekCard( ghpcDECK* pd );

/* find out maximum value here */
ghpcCARD		ghpcDeckPeekCardAt( ghpcDECK* pd, unsigned int pos );
unsigned int	ghpcDeckPeekCardPosition( ghpcDECK* pd, ghpcCARD c );


#endif
