template<typename M, typename OM = M> struct LazySegmentTree {
    using F = function<M(M,M)>;
    using G = function<M(M,OM)>;
    using H = function<OM(OM,OM)>;
    int sz; // 1<<height
    int height;
    vector<M> data; // [1],[2,3],[4,7], ..., [sz,2*sz-1]
    vector<OM> lazy;
    const F f;
    const G g;
    const H h;
    const M M1;
    const OM OM0;

    LazySegmentTree(int n, const F f, const G g, const H h, const M& M1, const OM& OM0) : f(f), g(g), h(h), M1(M1), OM0(OM0) {
        sz = 1;
        height = 0;
        while ( sz < n ) {
            sz <<= 1;
            height++;
        }