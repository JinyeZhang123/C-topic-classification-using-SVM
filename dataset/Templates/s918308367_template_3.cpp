template<typename T>
class bellman_ford {
  using edge_t = tuple<T, int, int>;
  const int n, r;
  const vector<edge_t>& edg;
  bool flg;
  vector<long long> dst;
  void cal () {
      dst[r] = 0;
      for (int q = n; q--;) {
        flg = false;
        for (auto const& e : edg) {
          T d; int s, t; tie(d, s, t) = e;
          if (dst[s] == inf) continue;
          if (cmn(dst[t], dst[s] + d)) flg = true;
        }