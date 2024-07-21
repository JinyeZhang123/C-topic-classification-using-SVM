template <typename T1, typename T2>
class LazySegmentTree {
public:
  using F = function<T1(T1&, T1&)>; // query_func
  using G = function<T2(T2&, T2&)>; // update_func
  using H = function<T1(T1&, T2&, int, int)>; // lazy to node (node, lazy, left, right)
  int n;
  vector<T1> node;
  vector<T2> lazy;
  T1 e1;
  T2 e2;
  F query_func;
  G update_func;
  H eval_func;

  LazySegmentTree(vector<T1> a, F query_func, G update_func, H eval_func, T1 e1, T2 e2)
    :query_func(query_func), update_func(update_func), eval_func(eval_func), e1(e1), e2(e2)
  {
    int _n = a.size();
    n = 1; while (n < _n) n *= 2;
    node.resize(2 * n - 1, e1);
    lazy.resize(2 * n - 1, e2);
    for (int i = 0; i < _n; i++) node[i + n - 1] = a[i];
    for (int i = n - 2; i >= 0; i--) {
      node[i] = query_func(node[i * 2 + 1], node[i * 2 + 2]);
    }