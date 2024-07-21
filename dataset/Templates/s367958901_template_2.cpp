template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
    if (v.size() == 0) return os;
    for (int i = 0; i < v.size() - 1; ++i) {
        os << v[i] << " ";
    }