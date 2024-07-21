value_t operator[](const int &k) {
    return query(k, k + 1);
  }