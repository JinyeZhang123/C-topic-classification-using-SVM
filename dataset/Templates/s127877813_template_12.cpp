template<typename Monoid> class RangeActionSegTree {
  using T = typename Monoid::value_type;

  Monoid m;
  vector<T> tree; // 1-indexed
  int size = 1;

public:
  RangeActionSegTree(const int &n = 0) {
    while (size < n) size *= 2;
    tree.assign(size * 2, m.id());
  }