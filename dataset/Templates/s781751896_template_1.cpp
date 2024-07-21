template<typename OperatorMonoid>
struct SegmentTree {
    using H = function<OperatorMonoid(OperatorMonoid, OperatorMonoid)>;
    const H h;
    const OperatorMonoid OM0;
    int sz, height;
    vector<OperatorMonoid> lazy;
    SegmentTree(int n, const H h, const OperatorMonoid &OM0)
        : h(h), OM0(OM0), sz(1), height(0)
    {
        while (sz < n) sz <<= 1, height++;
        lazy.assign(sz * 2, OM0);
    }