template <typename T, class MONOID>
class LazySegmentTree {
public:
    // セグメント木の葉の要素数
    int n;

    // セグメント木
    vector<T> tree, lazy;

    // モノイド
    MONOID mono;

    LazySegmentTree(vector<T> &v) {
        n = 1 << (int)ceil(log2(v.size()));
        tree = vector<T>(n << 1);
        lazy = vector<T>(n << 1, mono.unit);
        for(int i = 0; i < v.size(); ++i) {
            update(i, v[i]);
        }