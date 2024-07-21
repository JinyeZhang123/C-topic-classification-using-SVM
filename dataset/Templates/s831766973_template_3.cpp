template <typename Monoid>
struct LazySegtree {
    int n;
    vector<Monoid> dat, lazy;
    Monoid M0, L0;

    void init(int sz, Monoid m0, Monoid l0) {
        n = 1;
        M0 = m0;
        L0 = l0;
        while (n < sz) n *= 2;
        dat.assign(2*n-1, M0);
        lazy.assign(2*n-1, L0);
    }