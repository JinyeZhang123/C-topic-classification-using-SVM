template<typename T, typename E, typename F, typename G, typename H>
class LazySegmentTree {
  int n, height;
  F f; G g; H h; const T ti; const E ei;
  vector<T> dat; vector<E> laz; vector<int> highest;

  void propagate(int k) {
    if(laz[k] != ei) {
      laz[2*k] = h(laz[2*k],laz[k]); laz[2*k+1] = h(laz[2*k+1],laz[k]);
      dat[k] = g(dat[k],laz[k],n/highest[k]);
      laz[k] = ei;
    }