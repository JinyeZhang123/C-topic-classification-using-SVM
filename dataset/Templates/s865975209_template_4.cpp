template <class T>
void zip(V<T> &v) {
    sort(all(v));
    v.erase(unique(all(v)), v.end());
}