template <class T>
struct SegmentTree {
    size_t m, n;
    T e;
    vector<T> tree, buffer;
    SegmentTree(size_t m, T e=T()): m(m), n(1), e(e) {
        while (n <= m) n <<= 1;
        tree.assign(n<<1, e);
        buffer.assign(n<<1, e);
    }