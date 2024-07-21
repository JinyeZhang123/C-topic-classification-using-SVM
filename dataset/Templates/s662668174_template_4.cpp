template <class Edge>
decltype(auto) Johnson(const vector<Edge> & edges,
                 typename vector<Edge>::size_type node_num) {
  using size_type = typename vector<Edge>::size_type;
  using w_type = typename Edge::w_type;
  const w_type kInf = numeric_limits<int>::max();
  bool has_cycle = false;

  ++node_num;
  auto new_edges(edges);
  for (unsigned i = 0; i < node_num - 1; i++) {
    new_edges.emplace_back(node_num - 1, i, 0);
  }