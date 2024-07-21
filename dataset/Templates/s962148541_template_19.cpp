template <class T>
multiset<T> operator+(const multiset<T> l, const set<T>& r) {
    set<T> l_copy = l;
    for (auto i : r) { l_copy.insert(i); }