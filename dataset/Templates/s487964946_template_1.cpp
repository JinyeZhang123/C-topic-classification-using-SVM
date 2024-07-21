template <typename T>
std::ostream& operator<<(std::ostream& os, std::vector<T> v) {
  os << "[";
  for(int i = 0; i < int(v.size()); i++) {
    os << v[i] << (i == int(v.size()) - 1 ? "" : ", ");
  }