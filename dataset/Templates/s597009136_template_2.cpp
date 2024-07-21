template<class S, class T, class U> inline
ostream& operator<<(ostream&os, tuple<S,T,U> t) {
  return os << '('
    << get<0>(t) << ", "
    << get<1>(t) << ", "
    << get<2>(t) << ')';
}