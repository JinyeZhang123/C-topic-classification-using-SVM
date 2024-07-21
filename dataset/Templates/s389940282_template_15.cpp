template<typename T, T upperInf = numeric_limits<T>::max()> class RangeMinimumRangeUpdate {
  struct trait {
    struct FoldMonoid {
      using value_type = T;
      T id() { return upperInf; }