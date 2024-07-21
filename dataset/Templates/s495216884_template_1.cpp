template <typename M, typename N>
constexpr common_type_t<M, N> gcd(M a, N b) { return b ? gcd(b, a % b) : a; }