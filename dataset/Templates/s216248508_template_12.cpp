template<typename Monoid> class RangeActionSegTree {
  using T = typename Monoid::value_type;

  Monoid m;
  vector<T> tree; // 1-indexed
  int size = 1;

  void push(int i) {
    stack<int> s;
    while (i /= 2) s.emplace(i);
    for (int x; s.size(); s.pop()) {
      x = s.top();
      tree[x * 2] = m(tree[x * 2], tree[x]);
      tree[x * 2 + 1] = m(tree[x * 2 + 1], tree[x]);
      tree[x] = m.id();
    }