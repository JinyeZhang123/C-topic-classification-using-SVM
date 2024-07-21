template< typename C >
  int find_subtree(int a, const C &check, Monoid &Mo, bool type) {
    while(a < sz) {
      propagate(a);
      Monoid nxt = type ? f(reflect(2 * a + type), Mo) : f(Mo, reflect(2 * a + type));
      if(check(nxt)) a = 2 * a + type;
      else Mo = nxt, a = 2 * a + 1 - type;
    }