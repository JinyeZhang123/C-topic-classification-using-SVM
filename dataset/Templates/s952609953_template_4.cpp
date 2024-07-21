template<class G>
    void dfs_build(const G& g, const vector<int>& size, int u, int p, int h) {
        ia[u] = a.size();
        par[a.size()] = p == -1 ? -1 : ia[p];
        a.push_back(u);
        head.push_back(h);
        int heavy_v = -1, max_size = 0;
        for (int v : g[u]) {
            if (size[v] > max_size) {
                heavy_v = v;
                max_size = size[v];
            }