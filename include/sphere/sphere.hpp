#ifndef SPHERE_HPP
#define SPHERE_HPP

#include "vec3.hpp"
#include "ray.hpp"
#include "color.hpp"

class sphere {
    public:
    point3 center;
    double radius;

    sphere(point3 center, double radius) : center(center), radius(radius) {}

    bool ray_hit(const ray& r) const;
};

#endif /* SPHERE_HPP */