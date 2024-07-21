template<typename T>
struct Diameter {
private:
    using Edge = pair<int, T>;
    vector<T> dp,ps;
    vector<vector<Edge>> G;
    
    void dfs(int v, int p, int &s) {
        ps[v] = p;
        if (p < 0) dp[v] = T(0);
        if (dp[s] < dp[v]) s = v;
        for(Edge e : G[v]) {
            int u = e.first;
            if(u == p) continue;
            dp[u] = dp[v] + e.second;
            dfs(u, v, s);
        }