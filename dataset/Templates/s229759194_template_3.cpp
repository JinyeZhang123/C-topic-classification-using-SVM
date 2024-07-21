template< typename T >
T tree_diameter(const WG< T > &g) {
  auto p = tree_dfs(g, 0, -1);
  auto q = tree_dfs(g, p.second, -1);
  return (q.first);
}