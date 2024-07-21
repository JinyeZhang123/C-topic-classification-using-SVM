template<typename T>
struct SegmentTree{
private:
    int n, N;
    vector<T> node;
    function<T(T, T)> F;
    T E;
public:
    void init(int _n, function<T(T, T)> f, T e){
        F = f;
        E = e;
        n = _n;
        N = 1;
        while(N < n) N = (N<<1);
        node.assign(2*N-1, e);
    }