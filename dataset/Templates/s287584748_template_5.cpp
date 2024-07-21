template<class T>
struct lca {
    int n, root, l;
    vector<vector<int> > to, par;
    vector<vector<T> > co;
    vector<int> dep;
    vector<T> costs;
    lca(int n):n(n), to(n), co(n), dep(n), costs(n) {
        l = 0;
        while((1<<l) < n) ++l;
        par = vector<vector<int> >(n+1, vector<int>(l, n));
    }