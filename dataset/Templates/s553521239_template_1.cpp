template<typename T>
struct LazySegTree {
    int N;
    vector<T> dat, lazy;

    LazySegTree(int n, T init = 0): N(get_n(n)), dat(2*N-1, init), lazy(2*N-1, 0) {}