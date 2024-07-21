template <typename T, typename E> class SegTree {
    using F = function<T(T, T)>;
    using G = function<T(T, E)>;
    using H = function<E(E, E)>;
    using W = function<E(E, int)>;

    int N;
    F f;
    G g;
    H h;
    W w;
    T ti;
    E ei;
    vector<T> data;
    vector<E> lazy;

    void eval(int k, int len) {
        if (lazy[k] == ei) return;
        if (k < N-1) {
            lazy[2*k+1] = h(lazy[2*k+1], lazy[k]);
            lazy[2*k+2] = h(lazy[2*k+2], lazy[k]);
        }