template<class T, class Lazy> struct LazySegTree {
  private:
  public:
    int size;
    vector<T> v; vector<Lazy> lazy;
    vector<int> seg_size;
    using F = function<T(T,T)>;
    using G = function<Lazy(Lazy,Lazy)>;
    using H = function<T(T,Lazy,int)>;
    F f; G g; H h;
    T default_value; Lazy default_lazy;
  public:
    LazySegTree(int n, T default_value, Lazy default_lazy, F f, G g, H h)
      : default_value(default_value), default_lazy(default_lazy), f(f), g(g), h(h) {
      size = 1;
      while (size < n) size *= 2;

      v.resize(2 * size - 1, default_value);
      lazy.resize(4 * size - 1, default_lazy);
      seg_size.resize(2 * size - 1, 1);

      for (int i = 0; i < size - 1; ++i) {
        int j = size - 2 - i;
        seg_size[j] = seg_size[2 * j + 1] + seg_size[2 * j + 2];
      }