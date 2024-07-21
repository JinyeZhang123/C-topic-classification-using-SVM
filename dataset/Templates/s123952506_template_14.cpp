template<typename InputIterator> RangeActionSegTree(InputIterator first, InputIterator last) {
    int n = distance(first, last);
    while (size < n) size *= 2;
    tree.resize(size * 2, m.id());
    copy(first, last, tree.begin() + size);
  }