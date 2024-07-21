template <typename T, int M, int N> struct tuple_getter {
  static void get(std::istream &is, T &x) {
    is >> std::get<M>(x);
    tuple_getter<T, M + 1, N>::get(is, x);
  }