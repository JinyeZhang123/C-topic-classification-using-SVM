template <typename C> ll find_last(ll b, const C &check) {
    Monoid R = M1;
    if (b >= sz) {
      if (check(f(seg[1], R))) return find_subtree(1, check, R, true);
      return -1;
    }