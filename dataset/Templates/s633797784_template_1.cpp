template<typename T, typename U>
struct LazySegmentTree{
private:
    int n, N;
    vector<T> node;
    vector<U> lazy;
    function<T(T, T)> F;
    T E;
    function<T(T, U)> G;
    function<U(U, U)> H;
    U I;
public:
    void init(int _n, function<T(T, T)> f, T e, function<T(T, U)> g, function<U(U, U)> h, U i){
        F = f; E = e;
        G = g; H = h; I = i;
        n = _n; N = 1;
        while(N < n) N = (N<<1);
        node.assign(2*N-1, E);
        lazy.assign(2*N-1, I);
    }