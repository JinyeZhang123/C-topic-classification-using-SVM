template <typename T>
struct RMQ {
    //const T INF = numeric_limits<T>::max();
    ll n;         // 葉の数
    vector<T> dat; // 完全二分木の配列
    RMQ(ll n_) : n(), dat(n_ * 4, INF) { // 葉の数は 2^x の形
        ll x = 1;
        while (n_ > x) {
            x *= 2;
        }