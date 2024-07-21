template <class Graph>
std::vector<size_t> strongly_connected_component(const Graph &g) {
    using Edge = typename Graph::edge_type;

    size_t n = g.count_vertices;
    std::vector<bool> used(n, false);

    std::vector<size_t> post_order;
    std::function<void(size_t)> post_order_traversal = [&](size_t u) {
        used[u] = true;
        for (const Edge &e: g.edges[u]) {
            size_t v = e.to;
            if (!used[v]) {
                post_order_traversal(v);
            }