template<typename T> class RangeAdd {
  struct trait {
    using value_type = T;
    T id() { return T(); }