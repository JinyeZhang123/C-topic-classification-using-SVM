template<typename Monoid> class RangeActionSegTree {
  using T = typename Monoid::value_type;

  Monoid m;
  vector<T> tree; // 1-indexed
  int size = 1;

  void push(int x) {
    if (x <= 1) return;
    push(x /= 2);
    tree[x * 2] = m(tree[x * 2], tree[x]);
    tree[x * 2 + 1] = m(tree[x * 2 + 1], tree[x]);
    tree[x] = m.id();
  }