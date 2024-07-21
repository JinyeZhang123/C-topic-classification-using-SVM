template <typename X, typename M>
struct LazySegTree
{
    using FX = function<X(X, X)>;
    using FA = function<X(X, M)>;
    using FM = function<M(M, M)>;

    int n;
    FX fx;
    FA fa;
    FM fm;
    const X ex;
    const M em;
    vector<X> dat;
    vector<M> lazy;
    LazySegTree(int n_, FX fx_, FA fa_, FM fm_, X ex_, M em_) : n(),
                                                                fx(fx_),
                                                                fa(fa_),
                                                                fm(fm_),
                                                                em(em_),
                                                                ex(ex_)
    {
        n = 1 << (int)(log2(n_) + 1);
        dat = vector<X>(2 * n + 1, ex_);
        lazy = vector<M>(2 * n + 1, em_);
    }