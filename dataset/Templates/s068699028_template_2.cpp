template <typename T, int N> struct tuple_getter<T, N, N> {
  static void get(std::istream &is, T &x) { is >> std::get<N>(x); }