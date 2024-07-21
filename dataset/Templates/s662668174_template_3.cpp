template <class Edge>
decltype(auto) Dijkstra(const vector<Edge> & edges,
                 typename vector<Edge>::size_type node_num,
                 typename vector<Edge>::size_type source) {
  using size_type = typename vector<Edge>::size_type;
  using w_type = typename Edge::w_type;

  const w_type kInf = numeric_limits<w_type>::max();

  bitset<kMaxV> bs;
  vector<vector<Edge>> adjacency_list(node_num, vector<Edge>());
  for (const auto & e: edges) {
    adjacency_list[e.u].push_back(e);
  }