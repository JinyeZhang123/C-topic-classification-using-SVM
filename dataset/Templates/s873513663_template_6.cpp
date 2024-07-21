template <typename T>
  constexpr T mod(const T& lhs, const T& rhs) {
    return lhs - ::tools::quo(lhs, rhs) * rhs;
  }