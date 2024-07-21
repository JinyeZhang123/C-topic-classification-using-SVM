template <typename X>
struct SegTree {
    using FX = function<X(X, X)>;
    int n;
    FX fx;
    const X ex;
    vector<X> dat;
    SegTree(int n_, FX fx_, X ex_) : n(), fx(fx_), ex(ex_), dat(n_ * 4, ex_) {
        int x = 1;
        while (n_ > x) {
            x *= 2;
        }