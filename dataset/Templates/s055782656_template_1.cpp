template<class S, class T> inline
ostream& operator<<(ostream&os, pair<S,T> p) {
  return os << '(' << p.first << ", " << p.second << ')';
}