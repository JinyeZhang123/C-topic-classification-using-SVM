template <typename T>
T tree_diamiter(const dia_Graph &G)
{
    pair<T, int> p = dia_dfs<T>(G, 0, -1);
    pair<T, int> q = dia_dfs<T>(G, p.second, -1);
    return q.first;
}