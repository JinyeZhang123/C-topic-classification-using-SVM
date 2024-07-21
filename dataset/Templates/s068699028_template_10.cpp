template <typename T, int M, int N> struct tuple_printer {
  static void print(std::ostream &os, const T &x) {
    os << std::get<M>(x) << " ";
    tuple_printer<T, M + 1, N>::print(os, x);
  }