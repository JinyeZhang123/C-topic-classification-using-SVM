template <class T>
set<T> operator+(const set<T> l, const set<T>& r) {
    set<T> l_copy = l;
    for (auto i : r) { l_copy.insert(i); }