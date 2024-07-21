template <typename T, typename E> struct Segtree {
    inline T merge(const T &a, const T &b) { return min(a, b); }