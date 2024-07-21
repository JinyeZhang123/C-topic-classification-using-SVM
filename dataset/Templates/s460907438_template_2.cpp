template<typename T, int S>
struct LazySegT {
  typedef T seg_t;
  const seg_t OUT;
  static const int N = uprt(S);
  seg_t data[N * 2];
  seg_t lazy[N * 2];
  std::function<seg_t(seg_t,seg_t)>ufunc;
  template<typename F>
  LazySegT(T initial, F f) : OUT(initial), ufunc(f) {
    std::fill(std::begin(data), std::end(data), initial);
    std::fill(std::begin(lazy), std::end(lazy), 0);
  }