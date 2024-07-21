template <typename T, typename U, typename F, typename G, typename H>
class LazySegmentTree {
    int size;
    T tid;
    std::vector<T> dat;
    U uid;
    std::vector<U> lazy;

    F f;
    G g;
    H h;

    void propagate(const int k, const int l, const int r) {
        if (lazy[k] == uid) return;

        if (k < size - 1) {
            lazy[2 * k + 1] = h(lazy[2 * k + 1], lazy[k]);
            lazy[2 * k + 2] = h(lazy[2 * k + 2], lazy[k]);
        }