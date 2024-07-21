template<typename T> struct LazySegmentTree_max{
  int n;
  vector<T> node, lazy;
  vector<bool> lazy_flag;
  T MIN;

  LazySegmentTree_max(const vector<T> &v, const T &MIN_=0){
    init(v, MIN_);
  }