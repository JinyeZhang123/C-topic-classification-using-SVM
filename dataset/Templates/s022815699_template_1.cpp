template<typename T>
std::pair<T, int> dfs(const std::vector<std::vector<std::pair<int, T>>> &g, int cur, int par) {

  std::pair<T, int> ret(0, cur);
  for (auto e : g[cur]) {
    int nxt;
    T weight;
    tie(nxt, weight) = e;
    // auto [nxt, weight] = e; TODO こっちの戻す
    if (nxt == par) continue;
    auto cost = dfs(g, nxt, cur);
    cost.first += weight;
    ret = max(ret, cost);
  }