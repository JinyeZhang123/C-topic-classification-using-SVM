template<typename T>
std::tuple<int, int, T> tree_diameter(const std::vector<std::vector<std::pair<int, T>>> &g) {

  int u = dfs(g, 0, -1).second;
  // auto [_, u] = dfs(g, 0, -1); TODO こっちに戻す
  T dist;
  int v;
  tie(dist, v) = dfs(g, u, -1);
  // auto [dist, v] = dfs(g, u, -1); TODO こっちに戻す
  return make_tuple(u, v, dist);
}