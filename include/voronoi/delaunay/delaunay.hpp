#pragma once

#include "voronoi/graph/graph.hpp"
#include "voronoi/math/point2d.hpp"
#include <vector>

namespace vo::delaunay {

struct triangulation {
    graph::graph g;
};

triangulation triangulate(const std::vector<math::point2d>& points);

} // namespace vo::delaunay
