template<typename T, T upperInf = std::numeric_limits<T>::max()> struct minMonoid {
  using value_type = T;
  constexpr value_type id() { return upperInf; }