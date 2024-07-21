template<typename T> struct updateMonoid {
  using value_type = pair<bool, T>;
  constexpr value_type id() { return {false, T()}