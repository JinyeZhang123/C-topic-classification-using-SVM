template <typename G>
struct StronglyConnectedComponents {
    const G &g;
    UnWightedGraph gg, rg;
    vector<int> comp, order, used;
    StronglyConnectedComponents(G &g)
        : g(g), gg(g.size()), rg(g.size()), comp(g.size(), -1), used(g.size()) {
        for (int i = 0; i < g.size(); i++) {
            for (auto e : g[i]) {
                gg[i].push_back((int)e);
                rg[(int)e].push_back(i);
            }