template <typename T, typename E>
struct LazySegmentTree{
private:
  using F = function<T(T,T)>;
  using G = function<T(T,E)>;
  using H = function<E(E,E)>;
  int n, height;
  F f;
  G g;
  H h;
  T ti;
  E ei;
  vector<T> dat;
  vector<E> laz;
  T reflect(int k){
    return laz[k] == ei ? dat[k] : g(dat[k],laz[k]);
  }