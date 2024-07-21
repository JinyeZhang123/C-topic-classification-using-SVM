template <typename T>
constexpr typename std::enable_if<std::is_floating_point<T>::value, T>::type
inf_sub() {
  return std::min(std::numeric_limits<T>::max() / 2 - 1000, T(1e50));
}