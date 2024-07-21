template<typename T> struct SegTree_dual{
    using F=function<T(T, T)>;
    int sz=1;
    T et;
    F f, g;
    vector<T> node;

    SegTree_dual(int sz_, T et_, F f_, F g_): et(et_), f(f_), g(g_){
        while(sz<sz_) sz<<=1;
        node.resize(sz<<1, et);
    }