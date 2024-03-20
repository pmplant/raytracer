#ifndef COLOR_H
#define COLOR_H

#include "vec3.hpp"
class color : public vec3 {
    public:
        color() : vec3(0, 0, 0) {}
        color(double e0, double e1, double e2) : vec3(e0, e1, e2) {}

        color(const vec3 &other) : vec3(other) {}
        double r() { return e[0]; }
        double g() { return e[1]; }
        double b() { return e[2]; }
};

const double COLOR_MAX = 255.999;

void write_color(std::ostream &out, color pixel_color);

#endif /* COLOR_H */
