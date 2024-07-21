template<typename LSTTrait> class LazySegTree {
  using FoldMonoid = typename LSTTrait::FoldMonoid;
  using ActionMonoid = typename LSTTrait::ActionMonoid; // left-action
  using T = typename FoldMonoid::value_type;
  using Q = typename ActionMonoid::value_type;

  LSTTrait lstTrait;
  FoldMonoid foldM;
  ActionMonoid actionM;
  int size = 1;
  std::vector<T> tree; // 1-indexed
  std::vector<Q> lazy; // 1-indexed

  void flush(int i, int l, int r) {
    tree[i] = lstTrait.apply(tree[i], powm<ActionMonoid>(lazy[i], r - l));
    if (i < size) {
      lazy[i * 2] = actionM(lazy[i * 2], lazy[i]);
      lazy[i * 2 + 1] = actionM(lazy[i * 2 + 1], lazy[i]);
    }