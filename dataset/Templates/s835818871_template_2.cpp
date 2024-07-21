template< typename C >
    int find_subtree(int a, const C &check, Monoid &M, bool type) {
        while(a < sz) {
        propagate(a);
        Monoid nxt = type ? f(reflect(2 * a + type), M) : f(M, reflect(2 * a + type));
        if(check(nxt)) a = 2 * a + type;
        else M = nxt, a = 2 * a + 1 - type;
        }