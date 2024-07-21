template <typename T> class LazySegmentTree {
private:
    
    int n;
    vector < T > node, lazy;
    
    void  lazy_eval (int l, int r, int k) {
        node[k] += lazy[k];
        if (r - l > 1) {
            lazy[2 * k + 1] += lazy[k] >> 1;
            lazy[2 * k + 2] += lazy[k] >> 1;
        }