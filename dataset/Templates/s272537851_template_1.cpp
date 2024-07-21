template<class T>
struct LazySegTree {
    // tree: data structure
    // INF: initilize value
    // f: update function(old, new)
    // g: get function(parent, child1, child2)

    T INF;
    size_t N;
    std::vector<T> tree, lazy;
    std::vector<bool> lazyFlag;

    std::function<T(T,T)> F;
    std::function<T(T,T,T)> G;

    LazySegTree(size_t size, T inf, std::function<T(T,T)> f, std::function<T(T,T,T)> g) {
        INF = inf;
        F = f;
        G = g;

        N = 1;
        while( N < size ) {
            N <<= 1;
        }