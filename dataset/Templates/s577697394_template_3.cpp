template<typename T>
struct LazySegmentTree{
    int n;
    vector<T> val;
    vector<T> lazy;

    explicit LazySegmentTree(int n_){
        n = 1;
        while (n < n_) n <<= 1;

        val = vector<T>(n<<1, INF);
        lazy = vector<T>(n<<1, -1);
    }