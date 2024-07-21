template <class V>
struct RangeAdd {
    using E = V;
    static E op(const E& a, const E& b) { return a + b; }