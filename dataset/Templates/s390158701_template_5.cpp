template<typename T> class LazySegTree_RSQ_RAQ {
  int size = 1;
  std::vector<T> tree, lazy; // 1-indexed

  void flush(int i, int l, int r) {
    tree[i] = tree[i] + lazy[i] * (r - l);
    if (i < size) {
      lazy[i * 2] = lazy[i * 2] + lazy[i];
      lazy[i * 2 + 1] = lazy[i * 2 + 1] + lazy[i];
    }