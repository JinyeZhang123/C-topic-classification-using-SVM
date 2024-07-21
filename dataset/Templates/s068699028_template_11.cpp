template <typename T, int N> struct tuple_printer<T, N, N> {
  static void print(std::ostream &os, const T &x) { os << std::get<N>(x); }