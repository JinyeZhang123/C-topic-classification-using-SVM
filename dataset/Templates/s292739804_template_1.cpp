template<typename T>
struct SegTree {
  int n;
  vector<T> dat, lazy;
  SegTree(int _n) : n(), dat(_n*4,0), lazy(_n*4,0) {
    int x = 1;
    while (x < _n) x <<= 1;
    n = x;
  }