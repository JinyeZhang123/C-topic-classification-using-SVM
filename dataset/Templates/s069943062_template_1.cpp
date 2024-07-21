template <class T>
class SegTree {
    using F = function<T(T, T)>;
    int n;
    vector<T> data;
    const F f;
    const T e;

public:
    SegTree(const vector<T>& as, const F f, const T& e) : f(f), e(e) {
        n = 1;
        while (n < as.size()) n <<= 1;
        data.assign(2 * n, e);
        for (int i = 0; i < as.size(); i++) {
            data[n + i] = as[i];
        }