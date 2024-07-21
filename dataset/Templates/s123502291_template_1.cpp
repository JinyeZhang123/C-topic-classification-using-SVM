template<typename T, typename S>
struct LazySegTree{
    int size;
    std::vector<T> nod;
    std::vector<S> monoid;
    std::vector<bool> flag;
    T t0;
    S s0;
    std::function<T(T,T)> operation;
    std::function<S(S,S)> merge;
    std::function<T(T,S,int)> calc;
    LazySegTree(int n, T _t0, S _s0, std::function<T(T,T)> _operation, std::function<S(S,S)> _merge, std::function<T(T,S,int)> _calc){
        t0 = _t0;
        s0 = _s0;
        operation = _operation;
        merge = _merge;
        calc = _calc;
        size = 1;
        while(n > size) size *= 2;
        nod = std::vector<T> (size*2-1, t0);
        monoid = std::vector<S> (size*2-1, s0);
        flag = std::vector<bool> (size*2-1);
    }