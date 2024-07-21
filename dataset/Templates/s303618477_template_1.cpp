template <typename T>
struct RMQ
{
    ll INF = pow(2, 31) - 1;
    int n;
    vector<T> dat, lazy;
    RMQ(int n_) : n(), dat(n_ * 4, INF), lazy(n_ * 4, INF)
    {
        int x = 1;
        while (n_ > x)
            x *= 2;
        n = x;
    }