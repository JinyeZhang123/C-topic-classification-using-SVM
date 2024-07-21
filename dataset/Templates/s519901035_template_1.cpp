template <typename T>
struct LazySegTreeAddSum {
public:
  int n;
  std::vector<T> node, lazy;
  LazySegTreeAddSum(int sz) {
    n = 1; while(n < sz) n <<= 2;
    node.resize(2*n);
    lazy.resize(2*n, 0);
  }