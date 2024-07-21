template <typename M>
struct DualSegmentTree {
    using T = typename M::T;

    DualSegmentTree(int n) {
        size = 1;
        height = 1;
        while (size < n) size <<= 1, height++;
        lazy.resize(2 * size, M::id);
    }