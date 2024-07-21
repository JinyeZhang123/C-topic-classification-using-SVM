template <typename T> struct LazySegmentTree {
  
  int n;
  vector<T> node, lazy;

  LazySegmentTree (int sz, T init = 0) {
    n = 1; while (n < sz) n <<= 1;
    node.assign(2*n, init);
    lazy.assign(2*n,-1); 
  }