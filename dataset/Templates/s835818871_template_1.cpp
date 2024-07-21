template< typename Monoid, typename OperatorMonoid = Monoid >
struct LazySegmentTree {
    using F = function< Monoid(Monoid, Monoid) >;
    using G = function< Monoid(Monoid, OperatorMonoid, int) >;
    using H = function< OperatorMonoid(OperatorMonoid, OperatorMonoid) >;

    int sz, height;
    vector< Monoid > data;
    vector< OperatorMonoid > lazy;
    const F f;
    const G g;
    const H h;
    const Monoid M1;
    const OperatorMonoid OM0;


    LazySegmentTree(vector< Monoid > &vec, const F f, const G g, const H h,
                    const Monoid &M1, const OperatorMonoid OM0)
        : f(f), g(g), h(h), M1(M1), OM0(OM0) {
        int n = vec.size();
        sz = 1;
        height = 0;
        while(sz < n) sz <<= 1, height++;
        data.assign(2 * sz, M1);
        lazy.assign(2 * sz, OM0);
    }