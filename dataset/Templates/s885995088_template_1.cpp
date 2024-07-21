template<typename E>
struct SegmentTreeLazy {
    vector<E> data;
    vector<E> lazySet;
    vector<bool> lazySetB;  /* flag if there is a pending lazySet in node */
 
    E neutral;
    int n;
 
    function<E(E,E)> plus;
    function<E(E,int,int)> mult2;
 
    SegmentTreeLazy(int _n, E _neutral) {
        n=1;
        while(n<_n)
            n*=2;
 
        data.resize(n*2, _neutral);
        lazySet.resize(n*2, _neutral);
        lazySetB.resize(n*2);
        neutral=_neutral;
    }