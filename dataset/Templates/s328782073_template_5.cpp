template <typename T>
ostream &operator<<(ostream &os, const set<T> &s) {
  return jout(ALL(s), ", ", os << '{') << '}