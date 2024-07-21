template <class Graph>
    lowest_common_ancestor(const Graph &g, size_t root) {

        using Edge = typename Graph::edge_type;

        size_t N = g.n_vertices();
        size_t max_height = N - 1;
        log2_max_height = 32 - __builtin_clz(max_height);
        
        parent.assign(N, std::vector<size_t>(log2_max_height));
        depth.resize(N);

        std::function<void(int, int)> dfs = [&](int u, int p) {
            for (const Edge &e: g.edges_from(u)) {
                size_t v = e.to();
                if (v == p) {
                    continue;
                }