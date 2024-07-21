template <class T1, class T2>
ostream& operator<<(ostream& os, const pair<T1, T2>& v) {
    os << "(" << v.first << ", " << v.second << ")";
    return os;
}