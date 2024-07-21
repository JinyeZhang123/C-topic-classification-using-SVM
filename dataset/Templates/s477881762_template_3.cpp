template <typename T> struct Segtree {
    inline T merge(T a, T b) { return a.first > b.first ? a : b; }