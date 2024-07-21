template <typename G>
struct Lowlink {
    const G &g;
    vector <int> used, ord, low;
    vector <int> articulation;
    vector <pair<int,int>> bridge;

    Lowlink(const G &g) : g(g){
        used.assign(g.size(), 0);
        ord.assign(g.size(), 0);
        low.assign(g.size(), 0);
        int k = 0;
        for(int i = 0; i < g.size(); i++) {
            if(!used[i]) k = dfs(i, k, -1);
        }