template <class C> struct SegmentTreeBottomUp {
  using Data = typename C::Data; using Lazy = typename C::Lazy;
  int N; vector<Data> TR;
  template <class F> SegmentTreeBottomUp(int N, F f)
      : N(N), TR(N * 2, C::qdef()) {
    generate(TR.begin() + N, TR.end(), f);
    for (int i = N - 1; i > 0; i--) TR[i] = C::merge(TR[i * 2], TR[i * 2 + 1]);
  }