template<typename G>
struct StrongConnectedComponents {

    /// @bried graph SCCする元グラフ
    const G &graph;
    int V;

    /// @brief graph SCC用の内部グラフ
    UnWeightedGraph go_g, rv_g;

    /// @brief comp comp[v] = vの所属するSCCの番号 トポロジカル順
    vector<int> comp;

    /// @brief dfs用
    vector<bool> used;

    /// @brief dfsの帰りがけ順
    vector<int> order;

    StrongConnectedComponents(G &graph) :
            graph(graph), V(graph.size()), go_g(V), rv_g(V), comp(V, -1), used(V, false) {
        for (int i = 0; i < V; i++) {
            for (auto e: graph[i]) {
                go_g[i].emplace_back((int) e);
                rv_g[(int) e].emplace_back(i);
            }