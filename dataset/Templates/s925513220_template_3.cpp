template<std::size_t N>
  void Unite(int (&ps)[N], int x, int y) {
    x = Find(ps, x);
    y = Find(ps, y);
    if( x == y ) return;
    if( rand() & 0x01 ) std::swap(x, y);
    ps[x] = y;
  }