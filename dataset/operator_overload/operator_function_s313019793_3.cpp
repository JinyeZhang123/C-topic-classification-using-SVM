void operator+=(multiset<T>& l, S& r) {
    for (auto i : r) { l.insert(i); }