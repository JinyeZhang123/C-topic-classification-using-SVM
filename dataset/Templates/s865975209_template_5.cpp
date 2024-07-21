template <class T>
int lwb(V<T> &v, const T &x) { return lower_bound(all(v), x) - v.begin(); }