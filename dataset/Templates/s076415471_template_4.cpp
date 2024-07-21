template<typename T> int count_bit(T n) {
  static_assert(sizeof(T) == 4 || sizeof(T) == 8, "unsupported size");
  if (sizeof(T) == 4) return __builtin_popcount(n);
  if (sizeof(T) == 8) return __builtin_popcountll(n);
}