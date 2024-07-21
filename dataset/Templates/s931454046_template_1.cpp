template<typename M, typename N>
istream& operator>>(istream&is, pair<M,N> & p){is >> p.first >> p.second; return is;}