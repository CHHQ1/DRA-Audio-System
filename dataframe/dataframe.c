#ifndef __DATAFRAME_C_
#define __DATAFRAME_C_

/* some values shared by the encoder and decoder */

#include <stdint.h>
#include "dataframe.h"

/* TODO: Accumulate that!!! */
/* minimum nBand defined by Psychoacoustics model, 8kHz sample rate, long window */
INT     pnCBEdge[MAX_BAND] = {0, 26,  53,  80,  108, 138, 170, 204, 241,  282, 
                              328, 381, 443, 517, 606, 715, 848, 1010, 1024};

DOUBLE  aunStepSize[MAX_STEP] = {6.25e-2};     /* store step sizes for unit step */

#endif