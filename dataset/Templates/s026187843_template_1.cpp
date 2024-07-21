template<typename T> class segtree {
private:
    int n,sz,h; vector<T> node, lazy;
    vector<bool> lazyFlag;
    void eval(int k) {
        if(lazyFlag[k]){
            node[k] = lazy[k];
            if(k < n) {
                lazy[k*2] = lazy[k*2+1] = lazy[k];
                lazyFlag[k*2] = lazyFlag[k*2+1] = true;
            }