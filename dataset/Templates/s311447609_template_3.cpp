template <typename Q>
  void add(int u, int v, const Q &q, bool edge = false) {
    for(;; v = par[head[v]]) {
      if(in[u] > in[v]) swap(u, v);
      if(head[u] == head[v]) break;
      q(in[head[v]], in[v] + 1);
    }