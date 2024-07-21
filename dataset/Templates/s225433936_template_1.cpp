template <typename T, typename U>
struct LazySegTree {
  std::function<T (T, T)> op;
  T id;
  std::function<U (U, U)> lazy_op;
  U lazy_id;
  std::function<T (T, U, int)> update;

  int n;

  std::vector<T> node;
  std::vector<T> lazy_node;

  LazySegTree(std::function<T (T, T)> _op, T _id, std::function<U (U, U)> _lazy_op, U _lazy_id, std::function<T (T, U, int)> _update, std::vector<T> valvec) {
    op = _op;
    id = _id;
    lazy_op = _lazy_op;
    lazy_id = _lazy_id;
    update = _update;

    for (n = 1; n < valvec.size(); n *= 2);

    node.resize(2*n-1);
    for (int i = 0; i < valvec.size(); i++) node[n-1+i] = valvec[i];
    for (int i = valvec.size(); i < n; i++) node[n-1+i] = id;
    for (int i = n-2; i >= 0; i--) node[i] = op(node[2*i+1], node[2*i+2]);

    lazy_node.resize(2*n-1);
    for (int i = 0; i < 2*n-1; i++) lazy_node[i] = lazy_id;
  }