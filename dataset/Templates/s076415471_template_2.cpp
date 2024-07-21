template<typename T> int least_bit_fast(T n) {
  static_assert(sizeof(T) == 4 || sizeof(T) == 8, "unsupported size");
  if (sizeof(T) == 4) return __builtin_ctz(n);
  if (sizeof(T) == 8) return __builtin_ctzll(n);
}