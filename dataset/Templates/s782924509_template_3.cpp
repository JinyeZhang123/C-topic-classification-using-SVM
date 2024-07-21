template <typename _Tp>
struct LazySegmentTree {
  _Tp n;
  vector<_Tp> node, lazy;

  LazySegmentTree(vector<_Tp> const& v) {
    _Tp sz = v.size();
    n = 1;
    while (sz > n) n *= 2;
    node.resize(2*n-1);
    lazy.resize(2*n-1, 0);

    for (int i = 0; i < sz; ++i) {
      node[i+n-1] = v[i];
    }