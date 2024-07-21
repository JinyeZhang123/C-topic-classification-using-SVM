template <typename T>
class segtree{
    using F = function<T(T,T)>;
    size_t n;
    F f;
    T unit;
    vector<T> tree;
    public:
    segtree(F f,T unit,const vector<T> &v):f(f),unit(unit),tree(){
        tree=build_segtree(f,unit,v);
        n = tree.size()/2;
    }