template<class V> class segtree {
private:
    int n;
    vector<V> node, lazy;
    vector<bool> lazyFlag;

public:
    segtree(vector<V> v) {
        int sz = (int)v.size();
        n = 1;
        while(n < sz){
            n *= 2;
        }