template <typename... Args>
std::istream &operator>>(std::istream &is, std::tuple<Args...> &t) {
  tuple_getter<std::tuple<Args...>, 0, sizeof...(Args) - 1>::get(is, t);
  return is;
}