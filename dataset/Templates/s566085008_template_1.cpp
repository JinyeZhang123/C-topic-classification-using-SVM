template<class T>
ostream &operator<<(ostream &os, const vector<T> &v) {
  os << "[";
  REP(i, SZ(v)) {
    if (i) os << ", ";
    os << v[i];
  }