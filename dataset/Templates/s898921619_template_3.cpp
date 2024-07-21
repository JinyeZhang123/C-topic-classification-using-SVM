template <typename GraphType>
struct Lowlink {
  const GraphType& graph;
  std::vector<int> ord, low, art;
  Edges<int> bridges;
  int k = 0;

  Lowlink(const GraphType& graph) : graph(graph), ord(graph.V, -1), low(graph.V), art(graph.V) {
    for (int u = 0; u < graph.V; ++u) {
      if (ord[u] >= 0) continue;
      dfs(u);
    }