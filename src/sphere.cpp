#include "vec3.hpp"
#include "ray.hpp"
#include "color.hpp"
#include "sphere.hpp"

bool sphere::ray_hit(const ray& r) const {
    vec3 oc = r.origin() - center;
    auto a = dot(r.direction(), r.direction());
    auto b = 2.0 * dot(oc, r.direction());
    auto c = dot(oc, oc) - radius * radius;
    auto discriminant = b * b - 4 * a * c;
    return discriminant >= 0;
}
