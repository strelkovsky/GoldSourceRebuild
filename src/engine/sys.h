/*
Copyright (C) 1996-1997 Id Software, Inc.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/
#ifndef ENGINE_SYS_H
#define ENGINE_SYS_H

#include <SDL2/SDL.h>

#include "quakedef.h"

/**
*	@file
*
*	non-portable functions
*/

/**
*	@addtogroup System_IO
*
*	@{
*/

using PrintfFunc = void ( * )( const char*, ... );

/**
*	Send text to the console
*/
void Sys_Printf( const char* fmt, ... );

/**
*	An error will cause the entire program to exit
*/
void Sys_Error( const char* error, ... );

extern PrintfFunc Launcher_ConsolePrintf;

/** @} */

double Sys_FloatTime();

bool Sys_IsWin95();
bool Sys_IsWin98();

void Sys_Init();
void Sys_Shutdown();

bool Sys_InitGame( char *lpOrgCmdLine, char *pBaseDir, void *pwnd, bool bIsDedicated );
void Sys_ShutdownGame();

extern bool g_bIsDedicatedServer;

extern SDL_Window* pmainwindow;

#endif //ENGINE_SYS_H
