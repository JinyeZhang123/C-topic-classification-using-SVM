template< typename T >
pair< T, int > tree_dfs(const WG< T > &g, int idx, int par) {
  pair< T, int > ret(0, idx);
  for(auto &e : g[idx]) {
    if(e.to == par) continue;
    auto cost = tree_dfs(g, e.to, idx);
    cost.first += e.cost;
    ret = max(ret, cost);
  }