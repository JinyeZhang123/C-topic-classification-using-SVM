template <typename T, const T& F(const T&, const T&), T ZERO>
// template <typename T, T F(T, T), T ZERO>
struct SegmentTree {
    ll n;
    vector<T> v;

    SegmentTree(ll n_){
        n = 1;
        while(n < n_){ n *= 2; }