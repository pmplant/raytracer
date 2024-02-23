#include "color.hpp"
#include <iostream>

void write_color(std::ostream &out, color pixel_color) {
    out << static_cast<int>(COLOR_MAX * pixel_color.x()) << ' '
	<< static_cast<int>(COLOR_MAX * pixel_color.y()) << ' '
	<< static_cast<int>(COLOR_MAX * pixel_color.z()) << '\n';
}
