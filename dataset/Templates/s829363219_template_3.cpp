template< typename T, typename S >
struct LazySegmentTree{
    int n;
    vector<T> data;
    vector<S> lazy;
    T te;
    S se;

    inline void merge_functions(S& lazy,S& val){
        lazy+=val;
        //lazy=val;
    }