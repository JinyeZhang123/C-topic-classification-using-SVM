template <typename T> ostream &operator<<(ostream &os, const vector<T> &vec) {
  os << "{";
  REP(i, (ll)vec.size())
  os << vec[i] << (i + 1 == (ll)vec.size() ? "" : ", ");
  os << "}