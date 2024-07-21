template <typename T>
struct segment_tree {
  using F = function<T(T, T)>;
  using C = function<bool(T)>;
  int sz;
  vector<T> seg;

  const F f;
  const T M1;

  segment_tree(int n, const F f, const T &M1) : f(f), M1(M1) {
    sz = 1;
    while (sz < n) sz <<= 1;
    seg.assign(2 * sz, M1);
  }