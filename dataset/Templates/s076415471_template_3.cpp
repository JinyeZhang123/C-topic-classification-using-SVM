template<typename T> int most_bit(T n) {
  static_assert(sizeof(T) == 4 || sizeof(T) == 8, "unsupported size");
  if (sizeof(T) == 4) return n ? 31 - __builtin_clz(n) : -1;
  if (sizeof(T) == 8) return n ? 63 - __builtin_clzll(n) : -1;
}