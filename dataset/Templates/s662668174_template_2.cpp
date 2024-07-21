template <class Edge>
decltype(auto) BellmanFord(vector<Edge> & edges,
                 typename vector<Edge>::size_type node_num,
                 typename vector<Edge>::size_type source) {
  using size_type = typename vector<Edge>::size_type;
  using w_type = typename Edge::w_type;

  const w_type kInf = numeric_limits<w_type>::max();

  w_type weight_sum{}