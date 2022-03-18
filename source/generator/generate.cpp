#include "voronoi/generator/generate.hpp"
#include "voronoi/math/point2d.hpp"
#include "voronoi/math/rect2d.hpp"
#include <random>

std::vector<vo::math::point2d>
vo::generator::generate_point_field(std::size_t point_count,
                                    math::rect2d bounds) {
    static std::random_device rd;
    static std::default_random_engine eng{rd()};

    std::vector<vo::math::point2d> result;
    result.reserve(point_count);

    for (std::size_t i = 0; i < point_count; i++) {
        std::uniform_real_distribution<> x_dist{bounds.x1, bounds.x2};
        std::uniform_real_distribution<> y_dist{bounds.y1, bounds.y2};
        result.emplace_back(math::point2d{.x = x_dist(eng), .y = y_dist(eng)});
    }

    return result;
}
