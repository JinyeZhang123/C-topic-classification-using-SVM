template <typename Ite> void build(Ite start, Ite end) {
    for (auto i = start; i < end; i++)
      data[i - start + len] = *i;
    for (int i = len - 1; i > 0; i--)
      data[i] = operation(data[2 * i], data[2 * i + 1]);
  }