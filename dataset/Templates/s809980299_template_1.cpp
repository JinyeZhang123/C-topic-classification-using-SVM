template <typename T, typename U>
constexpr void amin(T &a, const U &b) {
  if (b < a) a = b;
}