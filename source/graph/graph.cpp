#include "voronoi/graph/graph.hpp"

vo::graph::graph::graph() {
}

std::size_t vo::graph::graph::add_node(node n) {
    nodes.emplace_back(std::move(n));

    return nodes.size() - 1;
}

void vo::graph::graph::connect_nodes(std::size_t n1, std::size_t n2) {
    nodes[n1].edges.push_back(n2);
    nodes[n2].edges.push_back(n1);
}

const vo::graph::node& vo::graph::graph::node_at(std::size_t n) const {
    return nodes[n];
}
