template<class T, T Op(T, T), T E(), class U, T Ap(T, U), U Cp(U, U), U Id()>
struct SegmentTree {
  const int n;
  V<T> t;
  V<U> u;
  SegmentTree(int _n) : n(_n), t(2 * n, E()), u(n, Id()) {}