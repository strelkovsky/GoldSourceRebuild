#ifndef ENGINE_CL_DEMO_H
#define ENGINE_CL_DEMO_H

#include "cdll_int.h"
#include "demo_api.h"

int CL_DemoAPIRecording();

int CL_DemoAPIPlayback();

int CL_DemoAPITimedemo();

void CL_WriteClientDLLMessage( int size, byte* buf );

void CL_WriteDLLUpdate( client_data_t* cdat );

void CL_DemoAnim( int anim, int body );

#endif //ENGINE_CL_DEMO_H
