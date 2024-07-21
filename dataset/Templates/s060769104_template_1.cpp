template<class S, class T> std::ostream& operator<<(std::ostream& os, const std::pair<S, T>& p) {
  return (os << "(" << p.first << ", " << p.second << ")");
}