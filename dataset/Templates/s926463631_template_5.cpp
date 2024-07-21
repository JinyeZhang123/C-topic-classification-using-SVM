template <typename T, typename Y>
ostream& operator<<(ostream& os, const pair<T, Y>& p) {
  return os << "{" << p.fs << "," << p.sc << "}