/* ASEPRITE
 * Copyright (C) 2001-2012  David Capello
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef RASTER_ALGORITHM_FLIP_IMAGE_H_INCLUDED
#define RASTER_ALGORITHM_FLIP_IMAGE_H_INCLUDED

#include "gfx/fwd.h"
#include "raster/algorithm/flip_type.h"

class Image;

namespace raster {
  namespace algorithm {

    void flip_image(Image* image, const gfx::Rect& bounds, FlipType flipType);

  }
}

#endif
