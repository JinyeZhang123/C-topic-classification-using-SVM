template<class Monoid> struct SegmentTree {
  using T = typename Monoid::Type;
  vector<T> data;
  Monoid func;
  int sz;
  SegmentTree(int n, Monoid f):func(f) {
    sz = 1; while(sz < n) sz <<= 1;
    data.resize(2*sz+1, func.nil);
  }