template< typename T, typename X,typename Fmv, typename Fop, typename Fmf >
struct LazySegmentTree{
    int n;
    vector<T> data;
    vector<X> lazy;
    Fmv merge_values;
    Fop operate;
    Fmf merge_functions;
    T te;
    X xe;

    LazySegmentTree(){}