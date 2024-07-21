template <class Edge>
void DFSVisitTopological(const typename vector<Edge>::size_type node_now,
       typename vector<Edge>::size_type & time,
       const vector<vector<Edge>> & adjacency_list,
       vector<int> & d,
       vector<int> & f,
       vector<Color> & color,
       vector<int> & parent,
       stack<int> & stk) {
  color[node_now] = Color::kGrey;
  d[node_now] = time++;
  for (const auto & e: adjacency_list[node_now]) {
    if (color[e.v] == Color::kWhite) {
      parent[e.v] = node_now;
      DFSVisitTopological(e.v, time, adjacency_list, d, f, color, parent, stk);
    }