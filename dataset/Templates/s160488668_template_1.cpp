template <typename Monoid, typename LazyMonoid> class LazySegmentTree {
private:
  using FunctionMonoid = function<Monoid(Monoid, Monoid)>;
  using FunctionAction = function<Monoid(Monoid, LazyMonoid)>;
  using FunctionLazy = function<LazyMonoid(LazyMonoid, LazyMonoid)>;
  FunctionMonoid fm;
  FunctionAction fa;
  FunctionLazy fl;
  int n, height;
  vector<Monoid> data;
  vector<LazyMonoid> lazy;
  Monoid M_UNITY;
  LazyMonoid L_UNITY;
  void build (const int siz) {
    n = 1;
    while (n < siz) n <<= 1, ++height;
    data.assign(2 * n, M_UNITY);
    lazy.assign(2 * n, L_UNITY);
  }