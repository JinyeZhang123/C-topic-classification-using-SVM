template<class T>
void dfs(int cur, int &time_visit, T graph) {
  // visiting cur
  time_visit += 1;
  ts_d[cur] = time_visit;
  for (auto dst : graph[cur]) {
    if (ts_d[dst] == 0) {
      dfs(dst, time_visit, graph);
    }