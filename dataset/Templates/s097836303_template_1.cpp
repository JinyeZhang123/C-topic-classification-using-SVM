template<class T>
struct LazySegmentTree {
private:
    int n;
    vector<T> node, lazy;
    vector<bool> updated;
    T def;
    function<T(T,T)> cmp;
    
    void init(const vector<T> &v, T _def, function<T(T,T)> _cmp) {
        def = _def; cmp = _cmp;
        int vl = (int)v.size();
        n = 1; while(n < vl) n *= 2;
        node.resize(2 * n - 1);
        lazy.resize(2 * n - 1, _def);
        updated.resize(2 * n - 1, false);
        for(int i = 0; i < vl; i++) node[i + n - 1] = v[i];
        for(int i = n - 2; i >= 0; i--) node[i] = cmp(node[i * 2 + 1], node[i * 2 + 2]);
    }