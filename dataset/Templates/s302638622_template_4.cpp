template<typename T>
constexpr T det2(const T &a1, const T &a2, const T &b1, const T &b2) {
  return a1 * b2 - b1 * a2;
}