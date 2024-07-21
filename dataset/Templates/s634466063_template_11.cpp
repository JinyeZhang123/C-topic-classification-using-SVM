template<typename M, typename OM = M>
struct LazySegTree{
  using F = function<M(M, M)>;
  using G = function<M(M, OM)>;
  using H = function<OM(OM, OM)>;

  int n, defn, height;
  vector<M> node;
  vector<OM> lazy;
  const F f;
  const G g;
  const H h;
  const M m;
  const OM om;

  LazySegTree(int _n, const F f, const G g, const H h, const M m, const OM om): f(f), g(g), h(h), m(m), om(om){
    n = 1;
    defn = _n;
    height = 1;
    while(n<defn) n<<=1, height++;
    node.assign(2*n, m);
    lazy.assign(2*n, om);
  }