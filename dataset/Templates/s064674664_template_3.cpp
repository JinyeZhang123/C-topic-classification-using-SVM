template< typename T >
struct SegTree {
    using F = function< T(T, T) >;
    int size;
    vector<T> data;

    const F f;
    const T t0;

    SegTree(int n, const F f, const T &t0) : f(f), t0(t0) {
        size = 1;
        while(size < n) size *= 2;
        data.assign(size*2-1, t0);
    }