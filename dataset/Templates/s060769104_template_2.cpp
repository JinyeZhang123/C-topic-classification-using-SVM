template<class T> std::ostream& operator<<(std::ostream& os, const std::vector<T>& v) {
  os << "[";
  for(int i = 0;i < v.size();i++) os << v[i] << ", ";
  return (os << "]");
}