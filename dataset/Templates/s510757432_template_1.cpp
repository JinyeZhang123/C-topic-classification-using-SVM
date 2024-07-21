template<class T> struct LazySegTree{
    int n = 1;
    int initv;
    vector<T> node, lazy;
    vector<bool> flag;

    LazySegTree(int n_, T initv_){
        while(n < n_) n *= 2;
        initv = initv_;
        node.resize(2*n-1, initv);
        lazy.resize(2*n-1, 0);
        flag.resize(2*n-1, false);
    }