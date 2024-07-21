template <typename Int>
class LazySegmentTree {
private:
    int N;
public:
    vector<Int> base, lazy;
    // sz: size of array size
    LazySegmentTree(int sz) {
        N = 1;
        while (N < sz) N *= 2;
        base.resize(2 * N - 1, 0);
        lazy.resize(2 * N - 1, 0);
    }