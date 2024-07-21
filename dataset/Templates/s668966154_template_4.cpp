template <typename GraphType,
          typename Edges = std::vector<typename graph_traits<GraphType>::edge_type>>
Edges kruskal(const GraphType& graph) {
  const int V = graph.V;
  Edges es;
  for (auto&& v : graph.G)
    for (auto&& e : v)
      es.emplace_back(e);
  std::sort(es.begin(), es.end());
  UF uf(V);
  Edges spanning_tree;
  spanning_tree.reserve(V - 1);
  for (auto&& e : es) {
    if (!uf.unite(e.from, e.to)) continue;
    spanning_tree.emplace_back(e);
  }