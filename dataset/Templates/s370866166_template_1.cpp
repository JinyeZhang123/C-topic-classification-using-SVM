template <class Graph>
std::vector<size_t> post_order_traversal(const Graph &g, size_t root) {
    using Edge = typename Graph::edge_type;

    size_t n = g.count_vertices;
    std::vector<size_t> order;
    std::vector<bool> used(n, false);
    std::function<void(size_t)> dfs = [&](size_t u) {
        printf("start node %d\n", u);
        used[u] = true;
        for (const Edge &e: g.edges[u]) {
            size_t v = e.to;
            if (!used[v]) {
                dfs(v);
            }