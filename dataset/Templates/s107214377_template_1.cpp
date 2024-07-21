template<class T>
ostream& operator<<(ostream& os, const vector<T>& vs) {
    if (vs.empty()) return os << "[]";
    os << "[" << vs[0];
    for (int i = 1; i < vs.size(); i++) os << " " << vs[i];
    return os << "]";
}