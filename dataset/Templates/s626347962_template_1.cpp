template<typename Monoid,typename OperatorMonoid>
struct LazySegmentTree{
    typedef function<Monoid(Monoid,Monoid)> F;
    typedef function<Monoid(Monoid,OperatorMonoid)> G;
    typedef function<OperatorMonoid(OperatorMonoid,OperatorMonoid)> H;
    int n,hi;
    F f;
    G g;
    H h;
    Monoid id0;
    OperatorMonoid id1;
    vector<Monoid> dat;
    vector<OperatorMonoid> laz;
    LazySegmentTree(int n_,F f,G g,H h,Monoid id0,OperatorMonoid id1):
                    f(f),g(g),h(h),id0(id0),id1(id1){init(n_);}