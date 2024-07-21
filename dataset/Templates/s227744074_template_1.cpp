template<class T>
struct SegTree {
    typedef T int_type;
    static const size_t MAX_N = 1 << 17;
    static const int_type INIT_VAL = (int_type(1)<<31)-1;
    int_type data[2 * MAX_N - 1];
    size_t n;
    SegTree(size_t n__) {
        n=1;
        while(n < n__) n*=2;
        rep(i,2*n-1) data[i]=INIT_VAL;
    }