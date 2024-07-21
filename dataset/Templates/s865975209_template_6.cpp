template <class T>
int upb(V<T> &v, const T &x) { return upper_bound(all(v), x) - v.begin(); }