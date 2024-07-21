template<class T>
struct StronglyConnectedComponents {
private:
    int n, k;
    vector<vector<int>> g, rg;
    vector<bool> used;
    vector<int> vs;
    vector<T> cmp;
    
    void dfs(int v) {
        used[v] = true;
        for(auto &u : g[v]) {
            if (!used[u]) dfs(u);
        }