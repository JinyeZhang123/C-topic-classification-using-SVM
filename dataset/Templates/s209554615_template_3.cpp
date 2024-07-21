template <class Edge>
void DFSVisit(const typename vector<Edge>::size_type node_now,
       const vector<vector<Edge>> & adjacency_list,
       vector<Color> & color,
       vector<typename vector<Edge>::size_type> & component,
       unsigned & component_num) {
  color[node_now] = Color::kGrey;
  for (const auto & e: adjacency_list[node_now]) {
    if (color[e.v] == Color::kWhite) {
      DFSVisit(e.v, adjacency_list, color, component, component_num);
    }