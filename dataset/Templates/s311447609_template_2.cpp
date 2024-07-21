template <typename T, typename Q, typename F>
  T query(int u, int v, const T &ti, const Q &q, const F &f, bool edge = false) {
    T l = ti, r = ti;
    for(;; v = par[head[v]]) {
      if(in[u] > in[v]) swap(u, v), swap(l, r);
      if(head[u] == head[v]) break;
      l = f(q(in[head[v]], in[v] + 1), l);
    }