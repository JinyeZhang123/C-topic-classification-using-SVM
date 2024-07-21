template<class T> struct segtree {
  int N, K;
  vector<T> dat, sum;
  function<T(T, T)> func;
  T ngvalue;
  query_type qtype;

  void init(int n, function<T(T, T)>&& f, T ng, query_type type) {
    K = 0, N = 1;
    while(N < n) K++, N <<= 1;
    dat.assign(2 * N - 1, 0);
    sum.assign(2 * N - 1, 0);
    func = std::move(f);
    ngvalue = ng;
    qtype = type;
  }