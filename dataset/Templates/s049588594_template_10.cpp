template <class V>
struct RangeUpd {
    using E = V;
    static E op(const E& a, const E& b) { return b; }