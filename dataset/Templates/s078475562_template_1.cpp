template <typename T> class LazySegmentTree {

private:

    int n;
    vector < bool > flag;
    vector < T > node, lazy;
    const T INF = numeric_limits<T>::max() / 2;
    
    void  lazy_eval (int l, int r, int k) {
        if (flag[k]) {
            node[k] = lazy[k];
            flag[k] = false;
            if (r - l > 1) {
                lazy[2 * k + 1] = lazy[k];
                lazy[2 * k + 2] = lazy[k];
                flag[2 * k + 1] = true;
                flag[2 * k + 2] = true;
            }