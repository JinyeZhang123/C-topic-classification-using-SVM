template<typename T> struct lcmMonoid {
  using value_type = T;
  constexpr T id() const { return 1; }