template<std::size_t N>
  int Find(int (&ps)[N], int x) {
    return ps[x] == x ? x : ps[x] = Find(ps, ps[x]);
  }