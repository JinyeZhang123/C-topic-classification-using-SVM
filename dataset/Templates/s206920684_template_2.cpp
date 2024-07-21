template<class T, int MAX_N>
struct SegmentTree {
    int n;
    T data[MAX_N * 2 - 1];
    const T INF = (1LL << 31) - 1LL;//rewrite
    void init(int n_) {
        n = 1;
        while(n < n_) n *= 2;
        fill_n(data, 2 * n - 1, INF);
    }