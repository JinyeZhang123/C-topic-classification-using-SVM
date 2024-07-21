template <typename T>
struct SegmentTree{
  using F = function<T(T,T)>;
  Int n;
  F f;
  T ti;
  vector<T> dat;

  SegmentTree(){}