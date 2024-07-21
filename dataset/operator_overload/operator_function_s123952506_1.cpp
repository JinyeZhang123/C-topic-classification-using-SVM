T operator[](int i) {
    T acc = tree[i += size];
    while (i /= 2) acc = m(acc, tree[i]);
    return acc;
  }