template <typename T, typename E>
class lazy_segtree {
private:
    using Op = function<T(T, T)>;
    using Compose = function<E(E, E)>;
    using Act = function<T(T, E)>;
    using Power = function<E(E, int)>;

    size_t N;
    vector<T> data;
    vector<E> lazy;
    const T idT;
    const E idE;
    const Op op;
    const Compose compose;
    const Act act;
    const Power power;

    void eval(size_t k, size_t len) {
        if(lazy[k] == idE) return;
        if(2 * k + 1 < 2 * N) {
            lazy[2 * k] = compose(lazy[2 * k], lazy[k]);
            lazy[2 * k + 1] = compose(lazy[2 * k + 1], lazy[k]);
        }