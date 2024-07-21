template<typename M, typename N>
ostream& operator<<(ostream&os, const pair<M,N> &p){os << p.fi << ' ' << p.se << '\n';return os;}