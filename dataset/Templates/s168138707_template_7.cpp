template<typename T> struct sumMonoid {
  using value_type = T;
  constexpr value_type id() { return 0; }