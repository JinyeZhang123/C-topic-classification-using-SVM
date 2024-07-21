template <typename... Args>
std::ostream &operator<<(std::ostream &os, const std::tuple<Args...> &t) {
  tuple_printer<std::tuple<Args...>, 0, sizeof...(Args) - 1>::print(os, t);
  return os;
}