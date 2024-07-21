template<typename LSTTrait> class LazySegTree {
  using FoldMonoid = typename LSTTrait::FoldMonoid;
  using ActionMonoid = typename LSTTrait::ActionMonoid;
  using T = typename FoldMonoid::value_type;
  using Q = typename ActionMonoid::value_type;

  LSTTrait lstTrait; // apply :: (T, Q) -> T, pow :: (Q, int) -> Q
  FoldMonoid foldM;
  ActionMonoid actionM;
  int size = 1;
  vector<T> tree; // 1-indexed
  vector<Q> lazy; // 1-indexed

  void push(int i) {
    stack<pair<int, int>> s;
    for (int d = 1; i /= 2; d *= 2) s.emplace(i, d);
    for (int x, d; s.size(); s.pop()) {
      tie(x, d) = s.top();
      update(x * 2, lazy[x], d);
      update(x * 2 + 1, lazy[x], d);
      lazy[x] = actionM.id();
    }