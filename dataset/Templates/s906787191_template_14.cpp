template<typename T> struct updateMonoid {
  using value_type = pair<bool, T>;
  value_type id() { return {false, T()}