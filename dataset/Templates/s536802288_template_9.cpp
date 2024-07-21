template <class U>
struct RangeSum {
    using T = U;
    static T op(const T& a, const T& b) { return a + b; }