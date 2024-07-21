template< typename T >
T tree_diameter(const WeightedGraph< T > &g, int st_idx) {
    auto p = tree_dfs(g, st_idx, -1); //st_idxから最遠頂点
    auto q = tree_dfs(g, p.second, -1); //上記の最遠頂点からの最遠頂点
    return (q.first);
}