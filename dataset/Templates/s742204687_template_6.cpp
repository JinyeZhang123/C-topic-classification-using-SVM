template<typename T>
class diameter {
  const int n;
  const vector<vector<pair<T, int>>>& grh;
  T diam;
  int ex, fx;
  void cal () {
    for (int t = 0; t < 2; t++) {
      diam = 0;
      fix ([&](auto dfs, int crr, int prt, T dpt = 0) -> void {
        if (cmx(diam, dpt)) fx = crr;
        for (auto const& e : grh[crr]) {
          T w; int nxt; tie(w, nxt) = e;
          if (nxt == prt) continue;
          dfs(nxt, crr, dpt + w);
        }