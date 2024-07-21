template<typename D, typename L>
struct segtree {
    using F = function<D(D, D)>;
    using G = function<D(L, D)>;
    using H = function<L(L, L)>;
    F f;
    G g;
    H h;
    D De;
    L Le;
    int n, height;
    vector<D> dat;
    vector<L> lazy;

    segtree(F f, G g, H h, D De, L Le):
        f(f), g(g), h(h), De(De), Le(Le){}