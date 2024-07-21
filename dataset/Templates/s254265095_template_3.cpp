template <typename T> struct zero_sum_monoid {
    using value_type = T;
    constexpr T id() const { return 0; }