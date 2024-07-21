template <class T, class S>
multiset<T> operator+(multiset<T>& l, S& r) {
    set<T> l_copy = l;
    for (auto i : r) { l_copy.insert(i); }