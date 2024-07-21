template<typename T> int least_bit(T n) {
  static_assert(sizeof(T) == 4 || sizeof(T) == 8, "unsupported size");
  if (sizeof(T) == 4) return __builtin_ffs(n) - 1;
  if (sizeof(T) == 8) return __builtin_ffsll(n) - 1;
}