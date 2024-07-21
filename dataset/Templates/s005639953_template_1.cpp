template <typename T>
std::ostream& operator<<(std::ostream& os, std::vector<T>& a) {
  os << "{";
  for (size_t i = 0; i < a.size(); ++i) os << (i > 0 ? "," : "") << a[i];
  return os << "}