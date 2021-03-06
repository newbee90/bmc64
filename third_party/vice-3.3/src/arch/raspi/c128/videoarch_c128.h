/*
 * videoarch_c128.h
 *
 * Written by
 *  Randy Rossi <randy.rossi@gmail.com>
 *
 * This file is part of VICE, the Versatile Commodore Emulator.
 * See README for copyright notice.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA.
 *
 */
#ifndef RASPI_VIDEOARCH_C128_H
#define RASPI_VIDEOARCH_C128_H

#include "arch/raspi/videoarch.h"

void set_refresh_rate(struct video_canvas_s *canvas);
void set_video_font(void);
unsigned int *raspi_get_palette(int index);
void set_canvas_size(int index, int *w, int *h, int *gw, int *gh);
void set_canvas_borders(int index, int *w, int *h);

#endif
