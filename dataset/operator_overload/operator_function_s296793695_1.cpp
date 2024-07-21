OperatorMonoid operator[](int k) {
    thrust(k += sz);
    return lazy[k];
  }