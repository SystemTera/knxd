/*
    EIBD eib bus access and management daemon
    Copyright (C) 2005-2011 Martin Koegler <mkoegler@auto.tuwien.ac.at>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef C_TPUART2s_H
#define C_TPUART2s_H

#include "tpuartserial2.h"

#define TPUART2s_URL "tpuarts2:/dev/ttySx\n"

#define TPUART2s_DOC "tpuarts2 connects to the EIB bus over an TPUART (using a user mode driver with baud 115200, experimental)\n\n"

#define TPUART2s_PREFIX "tpuart2s"

#define TPUART2s_CREATE tpuart2s_Create

#define TPUART2s_CLEANUP NULL

inline Layer2Interface *
tpuart22_Create (const char *dev, int flags, Trace * t)
{
  return new TPUART2SerialLayer2Driver (dev, arg.addr, flags, t);
}

#endif
