template <class T, class Functor>
struct SegmentTree {
    size_t n;
    T e;
    vector<T> tree;
    Functor F;
    SegmentTree(size_t m, T e=T()): n(1), e(e) {
        while (n <= m) n <<= 1;
        tree.assign(n<<1, e);
    }