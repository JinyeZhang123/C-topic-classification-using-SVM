template <class Monoid, class OperatorMonoid>
struct LazySegmentTree {
  typedef typename Monoid::value_t value_t;
  typedef typename OperatorMonoid::value_t operator_t;
  const Monoid monoid;
  const OperatorMonoid op_monoid;
  using G = function< value_t(value_t, operator_t) >;
  const G g;
  int n; // n_以上の最小の2冪
  int height; // 木の深さ. n == pow(2, height)
  vector<value_t> data;
  vector<operator_t> lazy;
  LazySegmentTree(const G g): monoid(), op_monoid(), g(g) {}