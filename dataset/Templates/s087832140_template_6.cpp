template<typename G>
struct StronglyConnectedComponents {
  const G &g;
  UnWeightedGraph gg, rg;
  vector<ll> comp, order, used;

  StronglyConnectedComponents(const G& g) : g(g), gg(g.size()), rg(g.size()), comp(g.size(), -1ll), used(g.size()) {
    rep(i,g.size()) {
      for(auto e : g[i]) {
        gg[i].emplace_back((ll) e);
        rg[(ll)e].emplace_back(i);
      }