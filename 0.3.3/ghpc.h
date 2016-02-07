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

//typedef struct t_ghpcDECK ghpcDECK;

typedef struct t_ghpcDECK {
  unsigned int 	cx;
  unsigned long offset;
  ghpcCARD*	deck;
} ghpcDECK;

char		ghpcCardGetSuitC( ghpcCARD c );
const char* 	ghpcCardGetSuitS( ghpcCARD c );
ghpcCARD 	ghpcCardGetSuitN( ghpcCARD c );
const char*	ghpcCardGetSuitFull( ghpcCARD c );

char		ghpcCardGetValueC( ghpcCARD c );
ghpcCARD	ghpcCardGetValueN( ghpcCARD c );
const char*	ghpcCardGetValueFull( ghpcCARD c );

ghpcDECK*	ghpcDeckCreate(  unsigned char nDecks );
ghRET		ghpcDeckDestroy( ghpcDECK* pd );

ghRET		ghpcDeckShuffle( ghpcDECK* pd, unsigned long cx );

char*		ghpcVersionGetString();
char*		ghpcNameGetString();
char*		ghpcCopyrightGetString();

ghpcCARD	ghpcDeckGetCard( ghpcDECK* pd );
ghpcCARD	ghpcDeckPeekCard( ghpcDECK* pd );

/* find out maximum value here */
ghpcCARD		ghpcDeckPeekCardAt( ghpcDECK* pd, unsigned int pos );
unsigned int	ghpcDeckPeekCardPosition( ghpcDECK* pd, ghpcCARD c );


#endif
