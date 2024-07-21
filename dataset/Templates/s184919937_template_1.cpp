template <class T, class Updater, class Aggregator>
class LazySegmentTree {
    size_t n, m;
    vector<T> tree, buf;
    vector<bool> buffering;
    Updater update;
    Aggregator aggregate;
    const T e;
    void buffer(size_t i, T x) {
        buffering[i] = true;
        buf[i] = update(buf[i], x);
        tree[i] = update(buf[i], x);
    }