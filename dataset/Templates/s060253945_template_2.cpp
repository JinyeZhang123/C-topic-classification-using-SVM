template <typename T>
pair<T, int> dfs(const vector<vector<edge<T>>> &G, int v, int par) {
    pair<T, int> farthest(0, v);
    for(edge<T> e : G[v]) {
        if(e.to == par) continue;
        auto far = dfs(G, e.to, v);
        far.first += e.weight;
        if(farthest.first < far.first) farthest = far;
    }