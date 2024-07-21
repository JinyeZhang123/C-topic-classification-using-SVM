template <typename T, typename F>
struct SegmentTree {
    int N;
    const int sz;
    const T ID;
    const F f;
    vector<T> cbt;
    SegmentTree(int n, T ID, F func) : sz(n), ID(ID), f(func) { init(sz); }