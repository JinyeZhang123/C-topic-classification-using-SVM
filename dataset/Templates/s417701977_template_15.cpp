template<typename T> class RangeSumRangeAdd {
  struct trait {
    struct FoldMonoid {
      using value_type = T;
      value_type id() { return 0; }