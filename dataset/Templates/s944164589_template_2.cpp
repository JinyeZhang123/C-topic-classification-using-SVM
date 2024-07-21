template<typename T>
struct LowLink {
    const int inf = 1000000000;
    int sz;
    std::vector<int> pre, low;
    std::vector<bool> sel;
    std::vector<std::pair<int, int>> bridge;
    std::vector<int> articulation;

    LowLink(const Graph<T> &g) {
        sz = g.size();
        pre.resize(sz, inf);
        low.resize(sz, inf);
        sel.resize(sz, false);
        int cnt = 0;
        dfs(g, 0, -1, cnt);
    }