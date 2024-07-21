template <typename Monoid, typename OperatorMonoid = Monoid> struct LazySegmentTree {
  using F = function<Monoid(Monoid, Monoid)>;
  using G = function<Monoid(Monoid, OperatorMonoid)>;
  using H = function<OperatorMonoid(OperatorMonoid, OperatorMonoid)>;
  using P = function<OperatorMonoid(OperatorMonoid, int)>;

  size_t sz;
  vector<Monoid> data;
  vector<OperatorMonoid> lazy;
  const F f;
  const G g;
  const H h;
  const P p;
  const Monoid M1;
  const OperatorMonoid OM0;

  LazySegmentTree(size_t n, const F f, const G g, const H h, const P p, const Monoid &M1, const OperatorMonoid &OM0) : sz(1 << (32 - __builtin_clz(n - 1))), f(f), g(g), h(h), p(p), M1(M1), OM0(OM0) {
    data.assign(2 * sz, M1);
    lazy.assign(2 * sz, OM0);
  }