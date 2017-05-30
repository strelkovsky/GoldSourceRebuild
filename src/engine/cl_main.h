#ifndef ENGINE_CL_MAIN_H
#define ENGINE_CL_MAIN_H

#include "cl_entity.h"
#include "dlight.h"

extern cl_entity_t* cl_entities;

extern float g_LastScreenUpdateTime;

extern cvar_t cl_lw;
extern cvar_t fs_perf_warnings;

dlight_t* CL_AllocDlight( int key );

dlight_t* CL_AllocElight( int key );

model_t* CL_GetModelByIndex( int index );

void CL_GetPlayerHulls();

bool UserIsConnectedOnLoopback();

#endif //ENGINE_CL_MAIN_H
