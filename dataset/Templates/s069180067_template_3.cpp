template< typename Monoid, typename OperatorMonoid = Monoid >
struct LazySegmentTree {
  typedef Monoid F(Monoid, Monoid);
  typedef Monoid G(Monoid, const OperatorMonoid);
  typedef OperatorMonoid H(const OperatorMonoid, const OperatorMonoid);

  int sz, height;
  vector< Monoid > data;
  vector< OperatorMonoid > lazy;
  F *f;
  G *g;
  H *h;
  const Monoid M1;
  const OperatorMonoid OM0;

  // F: binary operator of data
  // G: apply lazy value to data
  // H: binary operator of lazy values
  // M1: mempty for Monoid
  // OM0: mempty for OperatorMonoid
  LazySegmentTree(int n, F f, G g, H h,
                  const Monoid &M1, const OperatorMonoid OM0)
      : M1(M1), OM0(OM0) {
    this->f = f;
    this->g = g;
    this->h = h;
    sz = 1;
    height = 0;
    while(sz < n) sz <<= 1, height++;
    data.assign(2 * sz, M1);
    lazy.assign(2 * sz, OM0);
  }