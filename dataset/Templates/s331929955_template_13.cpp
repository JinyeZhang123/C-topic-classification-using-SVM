template<typename InputIterator> LazySegTree(InputIterator first, InputIterator last) {
    int n = distance(first, last);
    while (size < n) size *= 2;
    tree.resize(size * 2, foldM.id());
    lazy.assign(size, actionM.id());
    copy(first, last, tree.begin() + size);
    for (int i = size - 1; i >= 1; i--) tree[i] = foldM(tree[i * 2], tree[i * 2 + 1]);
  }