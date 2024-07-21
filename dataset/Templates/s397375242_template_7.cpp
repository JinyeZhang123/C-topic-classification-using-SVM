template <typename X>
struct SegTree
{
  using FX = function<X(X, X)>; // X•X -> X となる関数の型
  int n;
  FX fx;
  const X ex;
  vector<X> dat;
  SegTree() {}