template <typename Monoid, typename OperatorMonoid> struct LazySegmentTree {
    using F = function<Monoid(Monoid, Monoid)>;
    using G = function<Monoid(Monoid, OperatorMonoid)>;
    using H = function<OperatorMonoid(OperatorMonoid, OperatorMonoid)>;

    int sz, height;
    vector<Monoid> data;
    vector<OperatorMonoid> lazy;
    const F f;
    const G g;
    const H h;
    const Monoid M0;
    const OperatorMonoid O0;

    constexpr LazySegmentTree(const F &f, const G &g, const H &h,
                              const Monoid &M0, const OperatorMonoid &O0)
        : f(f), g(g), h(h), M0(M0), O0(O0) {}