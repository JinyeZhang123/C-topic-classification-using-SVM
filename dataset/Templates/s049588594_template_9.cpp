template <class U>
struct RangeMin {
    using T = U;
    static T op(const T& a, const T& b) { return min(a, b); }