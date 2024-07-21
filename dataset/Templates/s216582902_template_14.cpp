template<typename T> class RangeUpdateSegTree {
  struct updateMonoid {
    using value_type = pair<bool, T>;
    value_type id() { return {false, T()}