template<int inf = std::numeric_limits<Weight>::max() / 8> Matrix warshallFloyd(const Graph &g) {
  int n = g.size();
  Matrix d(n, Array(n, inf));
  rep(i, n) d[i][i] = 0;
  for (auto &adj : g) {
    for (auto &e : adj) cmin(d[e.src][e.dst], e.weight);
  }