template <class Edge>
decltype(auto) AllPairsShortestPaths(const vector<Edge> & edges,
                 typename vector<Edge>::size_type node_num) {
  using size_type = typename vector<Edge>::size_type;
  using w_type = typename Edge::w_type;
  const w_type kInf = numeric_limits<int>::max();

  vector<vector<w_type>> adjacency_matrix(node_num, vector<w_type>(node_num, kInf));
  for (const auto & e: edges) {
    adjacency_matrix[e.u][e.v] = e.w;
  }