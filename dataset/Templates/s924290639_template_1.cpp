template <typename M>
bool update(P& p, M& m, pair<int, int> d) {
  bool flag = false;
  while (true) {
    if (p.first + d.first < h &&
        p.first + d.first >= 0 &&
        p.second + d.second < w &&
        p.second + d.second >= 0) {
      if (m[p.first + d.first][p.second + d.second] == 1) {
        if (!flag) return false;
        m[p.first + d.first][p.second + d.second] = 0;
        return true;
      }