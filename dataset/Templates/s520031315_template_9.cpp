template <class T>
bool has(const vector<T> &a, const T &i) { return find(all(a), i) != a.end(); }