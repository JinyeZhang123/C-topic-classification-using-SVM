template <typename G>
struct HLD {
  G &g;
  vector<int> sz, in, out, head, rev, par;
  HLD(G &g) :
      g(g), sz(g.size()), in(g.size()), out(g.size()), head(g.size()), rev(g.size()), par(g.size()) {}