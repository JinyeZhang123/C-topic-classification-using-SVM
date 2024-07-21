template <class T>
struct segment_tree{
    using F = function<T(T, T)>;
    ll N;
    T d;
    F f;
    vector<T> data;

    segment_tree(ll _n, T _d, F _f) : f(_f), d(_d) {
        init(_n);
    }