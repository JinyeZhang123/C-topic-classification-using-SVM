template <class Edge>
decltype(auto) Prim(vector<Edge> & edges,
                 typename vector<Edge>::size_type node_num,
                 typename vector<Edge>::size_type root) {
  using size_type = typename vector<Edge>::size_type;
  using const_it = typename vector<Edge>::const_iterator;
  using w_type = typename Edge::w_type;

  bitset<kMaxV> bs;
  vector<vector<Edge>> adjacency(node_num, vector<Edge>());
  for (const auto & e: edges) {
    adjacency[e.u].push_back(e);
  }