template< typename T, typename E >
struct LazySegTree {
    using F = function< T(T, T) >;
    using G = function< T(T, E) >;
    using H = function< E(E, E) >;
    int size;
    vector<T> data;
    vector<E> lazy;

    const F f;
    const G g;
    const H h;
    const T t0;
    const E e0;

    LazySegTree(int n, const F f, const G g, const H h, const T &t0, const E &e0) : f(f), g(g), h(h), t0(t0), e0(e0) {
        size = 1;
        while(size < n) size *= 2;
        data.assign(2*size-1, t0);
        lazy.assign(2*size-1, e0);
    }