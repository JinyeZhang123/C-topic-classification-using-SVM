template <class T, class U>
bool has(const umap<T, U> &a, const T &i) { return a.find(i) != a.end(); }