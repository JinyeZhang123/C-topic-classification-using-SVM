template <class T>
void uniq(T &a) { a.erase(unique(all(a)), end(a)); }