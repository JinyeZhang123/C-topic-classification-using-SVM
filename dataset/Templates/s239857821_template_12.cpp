template <typename C> ll find_first(ll a, const C &check) {
    Monoid L = M1;
    if (a <= 0) {
      if (check(f(L, seg[1]))) return find_subtree(1, check, L, false);
      return -1;
    }