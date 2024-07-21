template <typename T>
struct BIT {
    ll n;
    vector<T> d;
    BIT(ll n = 0) : n(n), d(n + 1, INF) {}