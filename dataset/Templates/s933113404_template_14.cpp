template<typename T> struct sumMonoid {
  using value_type = T;
  value_type id() { return 0; }