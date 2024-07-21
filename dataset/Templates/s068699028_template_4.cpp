template <typename T, typename U>
std::istream &operator>>(std::istream &is, std::pair<T, U> &p) {
  is >> p.first >> p.second;
  return is;
}