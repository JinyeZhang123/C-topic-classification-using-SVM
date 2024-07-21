template <typename Monoid, typename OperatorMonoid>
struct LazySegmentTree{
    using F = function<Monoid(Monoid, Monoid)>;
    using G = function<Monoid(Monoid, OperatorMonoid)>;
    using H = function<OperatorMonoid(OperatorMonoid, OperatorMonoid)>;
    using P = function<OperatorMonoid(OperatorMonoid, int)>;
    int n;
    vector<Monoid> dat;
    vector<OperatorMonoid> laz;
    F f;
    G g;
    H h;
    P p;
    Monoid def;
    OperatorMonoid laz_def;

    LazySegmentTree(F f, G g, H h, P p, Monoid def, OperatorMonoid laz_def) : f(f), g(g), h(h), p(p), def(def), laz_def(laz_def){}