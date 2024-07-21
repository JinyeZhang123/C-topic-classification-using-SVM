template <class T, class S>
vector<T> operator+(vector<T>& l, S& r) {
    vector<T> l_copy = l;
    for (auto i : r) { l_copy.push_back(i); }