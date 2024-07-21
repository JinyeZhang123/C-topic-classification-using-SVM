template <typename IntType>
constexpr IntType ExtendedGCD(IntType a, IntType b, IntType& x, IntType& y) {
  if (b == 0) {
    x = 1;
    y = 0;
    return a;
  }