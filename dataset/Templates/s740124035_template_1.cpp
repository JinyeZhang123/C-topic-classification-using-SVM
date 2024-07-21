template<typename T, typename E> struct LazySegmentTree {
  using F = function<T(T, T)>;
  using G = function<T(T, E)>;
  using H = function<E(E, E)>;
  using P = function<E(E, int)>;

  int n;
  T ti;
  E ei;
  F f;
  G g;
  H h;
  P p;
  vector<T> data;
  vector<E> lazy;

  LazySegmentTree(int n_, F f, G g, H h, T ti = INT_MAX, E ei = INT_MAX,
                  P p = [](E a, int b) { return a; }