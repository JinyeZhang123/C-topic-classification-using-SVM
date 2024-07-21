template <class T> class SEGTREE {
    unsigned int n;
    T dflt, cmp;
    vector<T> dat;

    static T op(const T a, const T b) {
        return max(a, b);
    }