template<typename T>
class LazySegTree {
public:
    explicit LazySegTree(int n, T init, T def) : N(calcN_(n)), def(def) {
        mVal.assign(2*N+1, init);
        mLazy.assign(2*N+1, 0);
        mDirty.assign(2*N+1, 0);
    }