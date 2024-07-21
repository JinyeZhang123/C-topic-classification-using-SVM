template <class Edge>
void ArticulationPointsVisit(
    const typename vector<Edge>::size_type node_now,
    typename vector<Edge>::size_type & time,
    const vector<vector<Edge>> & adjacency_list,
    vector<int> & d,
    vector<int> & low,
    vector<Color> & color,
    vector<int> & parent,
    bitset<kMaxV> & bs_aps) {
  color[node_now] = Color::kGrey;
  d[node_now] = time;
  low[node_now] = time++;
  unsigned child_num = 0;
  for (const auto & e: adjacency_list[node_now]) {
    if (color[e.v] == Color::kWhite) {
      ++child_num;
      parent[e.v] = e.u;
      ArticulationPointsVisit(e.v, time, adjacency_list, d, low, color, parent, bs_aps);
      low[e.u] = min(low[e.u], low[e.v]);

      if (parent[e.u] == kNil && child_num >= 2) {
        bs_aps.set(e.u);
      }