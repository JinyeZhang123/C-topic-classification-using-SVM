template <typename T>
struct segtree {

  vector<T> seg, lazy;
  segtree(int n = 1e5) {
    n += 5;
    seg.resize(4*n, INT_MAX);
    lazy.resize(4*n, INT_MAX);
  }