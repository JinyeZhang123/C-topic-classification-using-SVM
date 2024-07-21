template <typename M, typename N>
constexpr common_type_t<M, N> lcm(M a, N b) { return (a != 0 && b != 0) ? a / gcd(a, b) * b : 0; }