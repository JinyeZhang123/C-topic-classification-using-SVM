template <typename T, class MONOID>
class SegmentTree {
public:
    // セグメント木の葉の要素数
    int n;

    // セグメント木
    vector<T> tree;
    vector<T> time;

    // モノイド
    MONOID mono;

    SegmentTree(vector<T> &v) : n(1 << (int)ceil(log2(v.size()))), tree(vector<T>(n << 1,-1)), time(vector<T>(n << 1,-1)) {
    }