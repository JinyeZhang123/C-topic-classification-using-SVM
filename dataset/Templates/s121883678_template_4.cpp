template <typename Data, typename Lazy> struct SegmentTree {
public:
    bool isLazy = false;
    int sz;
    vector<Data> seg;
    vector<Lazy> lazy;

    // mergeするときの操作
    using MergeData = function<Data(Data, Data)>;
    // lazyをxでupdate
    using UpdateLazyFromX = function<Lazy(Lazy, Lazy)>;
    // dataをlazyでupdate
    using UpdateDataFromLazy = function<Data(Data, Lazy)>;
    // lenが与えられた時にlazyを計算
    using CalcLazyWithLen = function<Lazy(Lazy, ll)>;

    // lazy
    // O(N)
    SegmentTree(int n, const MergeData fm, const UpdateLazyFromX fl, const UpdateDataFromLazy fa,
                const CalcLazyWithLen fw, Data M1, Lazy A1)
        : fm(fm), fl(fl), fa(fa), fw(fw), M1(M1), A1(A1) {
        isLazy = true;
        sz = 1;
        while (sz < n) sz *= 2;
        seg.assign(2 * sz - 1, M1);
        lazy.assign(2 * sz - 1, A1);
    }