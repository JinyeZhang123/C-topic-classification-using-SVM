template <class T, class S>
void operator+=(vector<T>& l, S& r) {
    for (auto i : r) { l.push_back(i); }