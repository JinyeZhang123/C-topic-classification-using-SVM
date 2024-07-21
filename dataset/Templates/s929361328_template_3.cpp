template< typename G >
struct SCC {
    const G &g;
    Graph gg, rg;
    vector< int > comp, order, used;

    SCC(G &g) : g(g), gg(g.size()), rg(g.size()), comp(g.size(), -1), used(g.size()) {
        for (int i = 0; i < g.size(); i++) {
            for (auto e : g[i]) {
                gg[i].emplace_back((int) e);
                rg[(int) e].emplace_back(i);
            }