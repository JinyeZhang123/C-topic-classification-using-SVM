template <typename T>
  constexpr T quo(const T& lhs, const T& rhs) {
    return lhs > static_cast<T>(0)
      ? lhs / rhs
      : rhs > static_cast<T>(0)
        ? -((-lhs - 1 + rhs) / rhs)
        : (-lhs - 1 + -rhs) / -rhs;
  }