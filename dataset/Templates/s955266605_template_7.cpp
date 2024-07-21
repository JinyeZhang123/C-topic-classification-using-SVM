template <typename T>
pair<T, int> dia_dfs(const dia_Graph &G, int u, int par)
{ // 最遠点間距離と最遠点を求める
    pair<T, int> ret = make_pair((T)0, u);
    for (auto e : G[u])
    {
        if (e.to == par)
            continue;
        auto next = dia_dfs<T>(G, e.to, u);
        next.first += e.cost;
        ret = max(ret, next);
    }