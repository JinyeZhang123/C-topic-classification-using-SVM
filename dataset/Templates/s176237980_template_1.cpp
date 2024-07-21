template<typename Monoid>
struct Seg {
  //Binary-op that merges the elements of two sub-arrays
  using F = function<Monoid(Monoid, Monoid)>;
  int sz;
  vector<Monoid> seg;
  const F f;
  const Monoid M1; // identity element of monoid
  Seg(int n, const F f, const Monoid &M1) : f(f), M1(M1) {
    sz = 1;
    while(sz<n) sz <<= 1;
    seg.assign(2*sz, M1);
  }