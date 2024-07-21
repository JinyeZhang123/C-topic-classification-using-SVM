template<typename UnionFind> std::pair<Weight, Edges> kruskal(const Graph &g) {
  UnionFind uf(g.size());
  Edges es;
  for (auto &adj : g) {
    for (auto &e : adj) es.emplace_back(e);
  }