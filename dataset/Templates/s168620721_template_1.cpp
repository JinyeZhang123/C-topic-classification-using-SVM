template <typename Graph>
struct StronglyConnectedComponents {
  Graph &g;
  int n;
  vector<vector<int>> gg;
  vector<vector<int>> rg;
  vector<bool> used;
  vector<int> order;
  vector<int> comp;
  StronglyConnectedComponents(Graph &g)
    : g(g), n(g.n), gg(n), rg(n), used(n), order(n), comp(n, -1) {
    for (int v = 0; v < n; v++) {
      for (auto e : g[v]) {
        gg[v].emplace_back(e.to);
        rg[e.to].emplace_back(v);
      }