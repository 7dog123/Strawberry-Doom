// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// Copyright(C) 2010 GhostlyDeath
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
// DWANGO server code
//

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

#include "config.h"

#include "doomdef.h"
#include "doomstat.h"
#include "i_system.h"
#include "i_timer.h"

#include "m_argv.h"

#include "net_client.h"
#include "net_common.h"
#include "net_defs.h"
#include "net_io.h"
#include "net_loop.h"
#include "net_packet.h"
#include "net_server.h"
#include "net_sdl.h"
#include "net_structrw.h"

/*****************
*** STRUCTURES ***
*****************/

/****************
*** FUNCTIONS ***
****************/

/* NET_SV_Init() -- initialize server and wait for connections */
void NET_SV_Init(void)
{
}

/* NET_SV_Run() -- run server: check for new packets received etc. */
void NET_SV_Run(void)
{
}

/* NET_SV_Shutdown() -- Shut down the server, Blocks until all clients disconnect, or until a 5 second timeout */
void NET_SV_Shutdown(void)
{
}

/* NET_SV_AddModule() -- Add a network module to the context used by the server */
void NET_SV_AddModule(net_module_t *module)
{
}

