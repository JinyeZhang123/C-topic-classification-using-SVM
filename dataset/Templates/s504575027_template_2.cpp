template< typename T >
pair< int, int > dfs(const WeightedGraph< T > &g, int idx, int par)
{
  pair< T, int > ret(0, idx);
  for(auto &e : g[idx]) {
    if(e.to == par) continue;
    auto cost = dfs(g, e.to, idx);
    cost.first += e.cost;
    ret = max(ret, cost);
  }