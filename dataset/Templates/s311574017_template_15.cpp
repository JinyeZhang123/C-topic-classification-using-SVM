template <class T>
vector<T> operator+(const vector<T> l, const vector<T>& r) {
    vector<T> l_copy = l;
    for (auto i : r) { l_copy.push_back(i); }