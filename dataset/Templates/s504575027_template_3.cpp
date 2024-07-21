template< typename T >
T tree_diameter(const WeightedGraph< T > &g)
{
  auto p = dfs(g, 0, -1);
  auto q = dfs(g, p.second, -1);
  return (q.first);
}