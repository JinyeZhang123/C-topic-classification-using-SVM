template <typename C> ll find_subtree(ll a, const C &check, Monoid &M, bool type) {
    while (a < sz) {
      Monoid nxt = type ? f(seg[2 * a + type], M) : f(M, seg[2 * a + type]);
      if (check(nxt))
        a = 2 * a + type;
      else
        M = nxt, a = 2 * a + 1 - type;
    }