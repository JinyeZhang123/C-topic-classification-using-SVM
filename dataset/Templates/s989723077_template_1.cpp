template <typename T,typename E, typename F, typename G, typename H>
struct LazySegmentTree{
    //using F = function<T(T,T)>;
    //using G = function<T(T,E)>;
    //using H = function<E(E,E)>;
    int n,height;
    F f;
    G g;
    H h;
    T ti;
    E ei;
    vector<T> dat;
    vector<E> laz;
    LazySegmentTree(F f,G g,H h,T ti,E ei):
        f(f),g(g),h(h),ti(ti),ei(ei){}