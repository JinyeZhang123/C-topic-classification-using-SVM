template <class T>
struct LazySegmentTreeRangeAddRangeSum {
    const T query_ident = 0;
    const T prop_ident = 0;
    int size;
    vector<T> data;
    vector<T> lazy;
    vi width;

    LazySegmentTreeRangeAddRangeSum(int n) {
        size = 1;
        while (size < n) size *= 2;
        data.assign(size * 2, query_ident);
        lazy.assign(size * 2, prop_ident);
        width.assign(size * 2, 1);
        rrep(k, 0, size - 1) {
            width[k] = width[k * 2 + 1] + width[k * 2 + 2];
        }