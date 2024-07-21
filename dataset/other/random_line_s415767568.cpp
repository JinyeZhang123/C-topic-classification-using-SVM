	LazySegmentTree(int n_) : n(size(n_)), data(n * 2, M::id1()), lazy(n * 2, M::id2()) {}
