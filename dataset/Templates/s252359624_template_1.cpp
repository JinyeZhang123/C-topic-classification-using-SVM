template<typename Mono,typename Ope>
struct LazySegmentTree{
    using F = function<Mono(Mono,Mono)>;
    using G = function<Mono(Mono,Ope)>;
    using H = function<Ope(Ope,Ope)>;
    int n,height;
    F f; G g; H h; Mono tu; Ope eu;
    vector<Mono> node;
    vector<Ope> lazy;

    LazySegmentTree(F f,G g,H h,Mono tu,Ope eu):f(f),g(g),h(h),tu(tu),eu(eu){}