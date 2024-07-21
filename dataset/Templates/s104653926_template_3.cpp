template<class M> struct ST {
  using T = typename M::T;
  using U = typename M::U;
  int n;
  V<T> t;
  V<U> u;
  V<> k;

  ST(int n) : n(n) {
    t.assign(2 * n, M::e());
    u.assign(n, M::id());
    k.assign(2 * n, 1);
    for (int i = n - 1; i; i--) k[i] = k[2 * i] + k[2 * i + 1];
  }