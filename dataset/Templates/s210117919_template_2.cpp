template< typename T >
struct StronglyConnectedComponents {
  const WG<T> &g;
  UG gg, rg;
  vector< int > comp, order, used;

  StronglyConnectedComponents(WG<T> &g) : g(g), gg(g.size()), rg(g.size()), comp(g.size(), -1), used(g.size()) {
    for(int i = 0; i < g.size(); i++) {
      for(auto e : g[i]) {
        gg[i].emplace_back((int) e.to);
        rg[(int) e.to].emplace_back(i);
      }