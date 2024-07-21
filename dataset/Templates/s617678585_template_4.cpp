template<int inf = std::numeric_limits<Weight>::max() / 8> std::pair<std::vector<Weight>, bool> bellmanFord(const Graph &g, int src) {
  int n = g.size();
  Edges es;
  for (auto &adj : g) {
    for (auto &e : adj) es.emplace_back(e);
  }