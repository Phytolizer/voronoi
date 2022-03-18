#pragma once

#include "voronoi/math/point2d.hpp"
#include "voronoi/math/rect2d.hpp"
#include <cstddef>
#include <vector>

namespace vo::generator {

std::vector<math::point2d> generate_point_field(std::size_t point_count,
                                                math::rect2d bounds);

}
