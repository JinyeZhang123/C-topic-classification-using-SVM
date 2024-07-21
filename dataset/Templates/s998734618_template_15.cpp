template<typename T> class RangeUpdate {
  struct updateMonoid {
    using value_type = pair<bool, T>;
    value_type id() { return {false, T()}