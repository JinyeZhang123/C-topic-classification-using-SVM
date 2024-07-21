template<typename T> T rng(T left, T right) {
  static mt19937 mt(chrono::steady_clock::now().time_since_epoch().count());
  return uniform_int_distribution<T>(left, right - 1)(mt);
}