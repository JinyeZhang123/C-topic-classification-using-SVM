template<class T> inline
ostream& operator<<(ostream&os, vector<T> v) {
  if (v.size() == 0) { return os << "(empty)"; }