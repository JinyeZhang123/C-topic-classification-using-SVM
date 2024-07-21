template<typename Monoid>
struct SegmentTree {
  using F = function<Monoid(Monoid, Monoid)>;
  int sz;
  vector<Monoid> seg;
  const F f;
  const Monoid M1;
  // SegmentTree<int> seg(N, [](int a, int b) { return min(a, b); }