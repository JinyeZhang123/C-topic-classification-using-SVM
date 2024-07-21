template <typename T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> &v) {
  for (auto it = v.begin(); it != v.end(); ++it) {
    if (it != v.begin()) os << " ";
    os << *it;
  }