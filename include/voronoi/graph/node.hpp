#pragma once

#include <cstddef>
#include <vector>

namespace vo::graph {

struct node {
    std::vector<std::size_t> edges;
};

} // namespace vo::graph
