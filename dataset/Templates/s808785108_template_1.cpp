template<class T>
struct SegmentTree {
    int n;
    vector<T> dat;
    SegmentTree(int n_ = 0) : n(n_){
        n = 1;
        while(n < n_) n <<= 1;
        dat.resize(n*2, inf);
    }