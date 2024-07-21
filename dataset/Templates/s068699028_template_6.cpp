template <typename T>
constexpr typename std::enable_if<std::is_integral<T>::value, T>::type
inf_sub() {
  return std::numeric_limits<T>::max() / 2 - 1000;
}