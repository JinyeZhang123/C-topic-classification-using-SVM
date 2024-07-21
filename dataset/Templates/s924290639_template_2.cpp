template <typename M>
void dfs(const P& p, const M& m, int& ans, int dps) {
  if (dps > 10) return;
  if (p.first == g.first && p.second == g.second) {
    if (ans > dps) {
      ans = dps;
      return;
    }