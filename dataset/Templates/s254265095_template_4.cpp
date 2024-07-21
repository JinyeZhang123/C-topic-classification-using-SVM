template <typename T> struct inf_min_monoid {
    using value_type = T;
    constexpr T id() const { return std::numeric_limits<T>::max(); }