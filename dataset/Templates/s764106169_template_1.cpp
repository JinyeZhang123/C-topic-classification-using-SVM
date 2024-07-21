template <typename T,typename E>
struct SegmentTree{
  using F = function<T(T,T)>;
  using G = function<T(T,E)>;
  using H = function<E(E,E)>;
  //この辺はとりあえずbeetのブログ読むのが良さそう？
  //最初の具体例で言うとTとEが0以上の整数で、F(a,b):max(a,b) G(a,α):if(α)a=α H(α,β):if(β)α=β のはず
  int n,height;
  F f;
  G g;
  H h;
  T ti;
  E ei;
  vector<T> dat;
  vector<E> laz;
  SegmentTree(F f,G g,H h,T ti,E ei):
    f(f),g(g),h(h),ti(ti),ei(ei){}