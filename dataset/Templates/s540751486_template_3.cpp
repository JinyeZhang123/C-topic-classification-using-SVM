template<class L, class R> ostream& operator<<(ostream &os, pair<L,R> p) {
    return os << "(" << p.ff << "," << p.ss << ")";
}