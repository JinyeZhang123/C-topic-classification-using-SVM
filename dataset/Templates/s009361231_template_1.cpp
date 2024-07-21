template<class T>
ostream& operator<<(ostream& os, const vector<T>& xs) {
    if (xs.empty()) return os << "[]";
    os << "[" << xs[0];
    for (int i = 1; i < xs.size(); i++) os << ' ' << xs[i];
    return os << "]";
}