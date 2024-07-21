template <typename T,typename E>
struct SegmentTree{
  using F = function<T(T,T)>;
  using G = function<T(T,E)>;
  using H = function<E(E,E)>;
  using P = function<E(E,size_t)>;
  int n;
  F f;
  G g;
  H h;
  T ti;
  E ei;
  P p;
  vector<T> dat;
  vector<E> laz;
  SegmentTree(int n_,F f,G g,H h,T ti,E ei,
	      P p=[](E a,size_t b){b++;return a;}