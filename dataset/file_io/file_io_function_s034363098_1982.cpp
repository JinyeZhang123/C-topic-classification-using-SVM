int main() {
//    ifstream cin("C:\\Users\\riku\\Downloads\\case_30.txt");

    int n, m;
    cin >> n >> m;
    vector<P> v(m);
    for (P &p:v) cin >> p.first >> p.second, p.first--, p.second--;

    vector<vector<int>> g(n);
    for (P p: v) g[p.first].push_back(p.second);

    vector<bool> memo(n, true);
    vector<int> route = [&]() {
        rep(i, n) {
            set<int> used;
            vector<int> route;
            bool ok = dfs(i, g, used, route, memo);
            if (ok) {
                return route;
            }