template <typename T>
struct SegTree {
    int n;
    vector<T> dat, lazy;
    const T NIL = 2e18;
    const T DFLT;    // ???????????§????????? minQuery -> 1e18, maxQuery -> -1e18
    SegTree(int n_, const T& initV, const T& dflt) : DFLT(dflt) {
        n = 1;
        while (n < n_) n *= 2;
        dat.assign(2 * n - 1, initV);
        lazy.assign(2 * n - 1, NIL);
    }