template<class G>
    void build(const G& g, int root) {
        int n = g.size();
        vector<int> size(n);
        dfs_size(g, size, root, -1);
        ia.resize(n);
        par.resize(n);
        dfs_build(g, size, root, -1, 0);
    }