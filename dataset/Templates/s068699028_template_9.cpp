template <typename T> constexpr T zero() {
  static_assert(std::is_arithmetic<T>::value, "T must be arithmetic value");
  return T(0);
}