template<typename LSTTrait> class LazySegTree {
  using FoldMonoid = typename LSTTrait::FoldMonoid;
  using ActionMonoid = typename LSTTrait::ActionMonoid;
  using T = typename FoldMonoid::value_type;
  using Q = typename ActionMonoid::value_type;

  FoldMonoid foldM;
  ActionMonoid actionM;
  int size = 1;
  std::vector<T> tree; // 1-indexed
  std::vector<Q> lazy; // 1-indexed

  void flush(int i, int l, int r) {
    tree[i] = tree[i] + lazy[i] * (r - l); // TODO
    if (i < size) {
      lazy[i * 2] = lazy[i * 2] + lazy[i]; // TODO
      lazy[i * 2 + 1] = lazy[i * 2 + 1] + lazy[i]; // TODO
    }