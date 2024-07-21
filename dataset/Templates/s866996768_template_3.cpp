template <class Edge>
bitset<kMaxV> ArticulationPoints(const vector<Edge> & edges,
                 typename vector<Edge>::size_type node_num) {
  using size_type = typename vector<Edge>::size_type;

  vector<vector<Edge>> adjacency_list(node_num, vector<Edge>());
  for (const auto & e: edges) {
    adjacency_list[e.u].push_back(e);
    adjacency_list[e.v].emplace_back(e.v, e.u, e.w);
  }