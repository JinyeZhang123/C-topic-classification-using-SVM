template<typename T>
static inline constexpr decltype(auto) fix (T&& t) noexcept {
  return fixed_point<T>{forward<T>(t)}