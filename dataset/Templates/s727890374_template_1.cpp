template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "[";
    rep (i, SZ(v)) {
        if (i) os << ", ";
        os << v[i];
    }