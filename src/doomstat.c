// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// Copyright(C) 1993-1996 Id Software, Inc.
// Copyright(C) 2005 Simon Howard
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
// 02111-1307, USA.
//
// DESCRIPTION:
//	Put all global tate variables here.
//
//-----------------------------------------------------------------------------



#include "doomstat.h"


// Game Mode - identify IWAD as shareware, retail etc.
GameMode_t gamemode = indetermined;
GameMission_t	gamemission = doom;
GameVersion_t   gameversion = exe_final;
char *gamedescription;

// Set if homebrew PWAD stuff has been added.
boolean	modifiedgame;
boolean fliplevels = false;



