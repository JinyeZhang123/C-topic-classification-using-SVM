template<typename T> struct SegmentTree {
  using F = function<T(T, T)>;

  int n;
  T init;
  F f;
  vector<T> data;

  SegmentTree() {}