template <typename T,typename E>
struct SegmentTree{
  typedef function<T(T,E)> G;
  typedef function<T(E,E)> H;
  int n;
  G g;
  H h;
  T d1;
  E d0;
  vector<T> dat;
  vector<E> laz;
  SegmentTree(){}