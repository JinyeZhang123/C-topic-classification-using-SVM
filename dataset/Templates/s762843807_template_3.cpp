template <typename T>
// T f(T, T): 子の累積に使うもの 直径ならf(x, y): max(x, y)
// T g(T, int): 子の累積を元に適用する際に使うもの 直径ならg(x, idx): x + 1
vector<T> rerooting(vector<vector<int>>& edges, vector<T> v, function<T(T, T)> f, function<T(T, int)> g, T op){
    int n = edges.size();
    vector<int> visit(n, 0);
    vector<T> dp1(v), dp2(n);
    vector<vector<int>> childs(n);
    vector<vector<T>> child_val(n), child_l(n), child_r(n);
    function<void(int)> f1 = [&](int x){
        visit[x] = true;
        T res = op;
        for(auto y : edges[x]){
            if(visit[y])
                continue;
            f1(y);
            childs[x].push_back(y);
            child_val[x].push_back(dp1[y]);
            res = f(res, dp1[y]);
        }