template <class M>
struct LazySegmentTree{
    using T = typename M::T;
    using L = typename M::L;
    int sz, height{}