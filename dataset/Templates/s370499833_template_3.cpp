template< typename Monoid, typename OperatorMonoid = Monoid >
struct LazySegmentTree {
  int sz, height;
  vector< Monoid > data;
  vector< OperatorMonoid > lazy;
  const Monoid M1;
  const OperatorMonoid OM0;

  // M1: mempty for Monoid
  // OM0: mempty for OperatorMonoid
  LazySegmentTree(int n, const Monoid &M1, const OperatorMonoid OM0)
      : M1(M1), OM0(OM0) {
    sz = 1;
    height = 0;
    while(sz < n) sz <<= 1, height++;
    data.assign(2 * sz, M1);
    lazy.assign(2 * sz, OM0);
  }