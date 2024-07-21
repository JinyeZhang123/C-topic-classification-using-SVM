template<typename T> struct LazySegmentTree_min{
  int n;
  vector<T> node, lazy;
  vector<bool> lazy_flag;
  T MAX;

  LazySegmentTree_min(const vector<T> &v, const T &MAX_=INT_MAX){
    init(v, MAX_);
  }