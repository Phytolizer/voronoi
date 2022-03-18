#pragma once

#include "voronoi/graph/node.hpp"
#include <vector>
namespace vo::graph {

class graph {
    std::vector<node> nodes;

  public:
    graph();

    std::size_t add_node(node n);
    void connect_nodes(std::size_t n1, std::size_t n2);
    const node& node_at(std::size_t n) const;
};

} // namespace vo::graph
