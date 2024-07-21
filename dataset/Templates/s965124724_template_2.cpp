template<class T, class M>
class abstract_lazy_segtree{
    public:

    int n; vector<T> data; vector<M> lazy;
    T id; M def;
    function<T(T,T)> op;
    function<T(T,M)> upd;
    function<M(M,M)> merge;
    function<M(M,int)> p;

    abstract_lazy_segtree(size_t _n, T _id, M _def,
    function<T(T,T)> _op, function<T(T,M)> _upd, function<M(M,M)> _merge,
    function<M(M,int)> _p = [](M a, int b){ return a; }