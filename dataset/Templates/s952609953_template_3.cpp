template<class G>
    void dfs_size(const G& g, vector<int>& size, int u, int p) {
        size[u] = 1;
        for (int v : g[u]) {
            if (v == p) continue;
            dfs_size(g, size, v, u);
            size[u] += size[v];
        }