template <class Edge>
decltype(auto) Kruskal(vector<Edge> & edges,
                 typename vector<Edge>::size_type node_num) {
  using size_type = typename vector<Edge>::size_type;
  using const_it = typename vector<Edge>::const_iterator;
  using w_type = typename Edge::w_type;

  w_type weight_sum = 0;
  size_type edge_num = 0;
  DisjointSet dis_set(node_num);
  for (size_type i = 0; i < node_num; ++i) { dis_set.MakeSet(i); }