template<typename costType = int>
class TreeDiameter {
private:
    std::vector<std::vector<std::pair<int, costType>>> Graph;
    std::vector<costType> dist;
    void makeTreeDfs(const std::vector<std::vector<int>> &G, int now, int prev) {
        for (auto &&e : G[now]) if (e != prev) {
            Graph[now].emplace_back(std::make_pair(e, 1));
            Graph[e].emplace_back(std::make_pair(now, 1));
            makeTreeDfs(G, e, now);
        }