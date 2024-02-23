#ifndef COLOR_H
#define COLOR_H

#include "vec3.hpp"

using color = vec3;

const double COLOR_MAX = 255.999;

void write_color(std::ostream &out, color pixel_color);

#endif /* COLOR_H */
