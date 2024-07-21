template <typename T> ostream& operator<<(ostream& os, const V<T>& v) {
  os << "{";
  for(auto e : v) os << e << ",";
  return os << "}