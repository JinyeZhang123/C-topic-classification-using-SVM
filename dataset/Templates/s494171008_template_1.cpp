template <class T>
struct segtree {
    int n;
    T e = 1e9;
    vector<T> node;
    vector<T> lazy;
    vector<bool> flag;
    function<T(T, T)> f = [&](T a, T b) { return min(a, b); }