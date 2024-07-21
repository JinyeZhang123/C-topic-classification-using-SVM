template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
  return jout(ALL(v), ", ", os << '[') << ']';
}