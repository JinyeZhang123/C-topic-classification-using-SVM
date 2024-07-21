template <class Edge>
void GetOrder(const typename vector<Edge>::size_type node_now,
       const vector<vector<Edge>> & adjacency_list,
       vector<Color> & color,
       stack<typename vector<Edge>::size_type> & order) {

  color[node_now] = Color::kGrey;
  for (const auto & e: adjacency_list[node_now]) {
    if (color[e.v] == Color::kWhite) {
      GetOrder(e.v, adjacency_list, color, order);
    }