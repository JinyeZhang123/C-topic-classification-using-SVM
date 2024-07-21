template<typename T>
ostream &operator<<(ostream &os, const vector<T> &vec) {
    os << "[";
    REP(i, vec.size()) {
        if (i > 0) cout << ", ";
        os << vec[i];
    }