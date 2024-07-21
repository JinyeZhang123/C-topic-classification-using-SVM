template <typename T>
struct RMQ {
    const T INF = numeric_limits<T>::max();
    int n;
    vector<T> dat, lazy;
    RMQ(int n_) : n(), dat(n_ * 4, INF), lazy(n_ * 4, 0) {
        int x = 1;
        while (n_ > x) x *= 2;
        n = x;
    }