template<class T, class E>
struct SegTree{
  typedef function<T(T,T)> F;
  typedef function<T(T,E)> G;
  typedef function<E(E,E)> H;
  typedef function<E(E,int)> P;
  int n;
  F f;
  G g;
  H h;
  P p;
  T d1;
  E d0;
  vector<T> dat;
  vector<E> lazy;
  SegTree(int n_, F f, G g, H h, T d1, E d0, P p=[](E a, int b){ return a; }