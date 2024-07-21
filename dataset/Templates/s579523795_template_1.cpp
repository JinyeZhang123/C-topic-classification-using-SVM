template <class T, class T2>
class LazySegTree {
    using F = function<T(T, T)>;
    using G = function<T(T, T2)>;
    using H = function<T2(T2, T2)>;
    using P = function<T2(T2, int)>;
    int n;
    vector<T> data;
    vector<T2> lazy;
    const F f;
    const G g;
    const H h;
    const P p;
    const T e;
    const T2 e2;

public:
    LazySegTree(const vector<T>& as, const F f, const G g, const H h, const P p, const T& e, const T2 e2) : f(f), g(g), h(h), p(p), e(e), e2(e2) {
        n = 1;
        while (n < as.size()) n <<= 1;
        data.assign(2 * n, e);
        lazy.assign(2 * n, e2);
        for (int i = 0; i < as.size(); i++) {
            data[n + i] = as[i];
        }