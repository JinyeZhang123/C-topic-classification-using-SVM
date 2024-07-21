template <typename X> struct SegTree {
    using F = function<X(X, X)>;
    int n; F f; const X ex; vector<X> dat;
    SegTree(int n_, F f_, X ex_) : n(),f(f_),ex(ex_),dat(n_*4, ex_) {
        int x = 1; while (n_ > x) {x *= 2;}