template <typename T, class F=min_<T>>
struct SegmentTree {
    size_t n;
    T e;
    vector<T> tree;
    F qfunc;
    SegmentTree(size_t m, T e=0): n(1), e(e) {
        qfunc = F();
        while (n < m) n <<= 1;
        tree = vector<T>(n<<1, e);
    }