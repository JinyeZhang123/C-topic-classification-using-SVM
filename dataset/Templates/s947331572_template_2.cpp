template<typename W>
    SCC(WeightedGraph<W> &g) : g(g), forward(g.size()), backward(g.size()), comp(g.size(), -1), used(g.size()) {
        for(int i = 0; i < g.size(); i++) {
            for(auto& e : g[i]) {
                forward[i].emplace_back((int) e.first);
                backward[(int) e.first].emplace_back(i);
            }