template<class T>
struct SegmentTree{
    using F=function<T(T,T)>;
    F f;
    T init;
    int sz;
    vector<T> seg;
    SegmentTree(int n,T init,F f):init(init),f(f){
        sz=1;
        while(sz<n) sz<<=1;
        seg.resize(sz<<1,init);
    }