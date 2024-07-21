template<std::size_t N>
  bool Same(int (&ps)[N], int x, int y) {
    return Find(ps, x) == Find(ps, y);
  }