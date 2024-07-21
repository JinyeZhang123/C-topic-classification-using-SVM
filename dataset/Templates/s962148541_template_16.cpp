template <class T, class S>
set<T> operator+(set<T>& l, S& r) {
    set<T> l_copy = l;
    for (auto i : r) { l_copy.insert(i); }