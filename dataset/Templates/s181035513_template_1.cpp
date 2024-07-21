template<typename M>
std::vector<typename M::T> re_rooting(const std::vector<std::vector<int>> &adj,
                                      const std::vector<std::vector<typename M::E>> &cost) {
    using T = typename M::T;
    int n = adj.size();
    std::vector<std::vector<T>> dp(n);
    {
        static auto dfs = [&](auto &&self, int cur, int par) -> T {
            dp[cur].resize(adj[cur].size());
            T cum = M::id();
            for (int i = 0; i < adj[cur].size(); i++) {
                if (adj[cur][i] == par) { continue; }