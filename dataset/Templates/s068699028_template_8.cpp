template <typename T> constexpr T inf() {
  static_assert(std::is_arithmetic<T>::value, "T must be arithmetic value");
  return sub::inf_sub<T>();
}