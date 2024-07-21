template< typename OperatorMonoid >
struct DuelSegTree {
  using H = function< OperatorMonoid(OperatorMonoid, OperatorMonoid) >;

  int sz, height;
  vector< OperatorMonoid > lazy;
  const H h;
  const OperatorMonoid OM0;


  DuelSegTree(int n, const H h, const OperatorMonoid OM0)
      : h(h), OM0(OM0) {
    sz = 1;
    height = 0;
    while(sz < n) sz <<= 1, height++;
    lazy.assign(2 * sz, OM0);
  }