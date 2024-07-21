template <typename T>
T diameter(const vector<vector<edge<T>>> &G) {
    auto far1 = dfs<T>(G, 0, -1);
    auto far2 = dfs<T>(G, far1.second, -1);
    return far2.first;
}