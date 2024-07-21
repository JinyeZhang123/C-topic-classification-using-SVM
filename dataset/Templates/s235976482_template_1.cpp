template<typename OperatorMonoid>
struct DualSegmentTree{
    typedef function<OperatorMonoid(OperatorMonoid,OperatorMonoid)> H;
    int n,hi;
    H h;
    OperatorMonoid id1;
    vector<OperatorMonoid> laz;
    DualSegmentTree(int n_,H h,OperatorMonoid id1):h(h),id1(id1){init(n_);}