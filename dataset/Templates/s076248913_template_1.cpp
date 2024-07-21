template< typename Monoid, typename OperatorMonoid = Monoid >
struct LazySegmentTree
{
  using F = function< Monoid(Monoid, Monoid) >;
  using G = function< Monoid(Monoid, OperatorMonoid) >;
  using H = function< OperatorMonoid(OperatorMonoid, OperatorMonoid) >;
  using P = function< OperatorMonoid(OperatorMonoid, int) >;

  int sz;
  vector< Monoid > seg, lazy;
  const F f;
  const G g;
  const H h;
  const P p;
  const Monoid M1;
  const OperatorMonoid OM0;


  LazySegmentTree(int n, const F f, const G g, const H h, const P p, const Monoid &M1, const OperatorMonoid OM0)
      : f(f), g(g), h(h), p(p), M1(M1), OM0(OM0)
  {
    sz = 1;
    while(sz < n) sz <<= 1;
    seg.assign(2 * sz, M1);
    lazy.assign(2 * sz, OM0);
  }