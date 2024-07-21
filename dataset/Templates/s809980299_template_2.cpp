template <typename T, typename U>
constexpr void amax(T &a, const U &b) {
  if (b > a) a = b;
}