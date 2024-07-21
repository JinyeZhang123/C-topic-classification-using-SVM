template<typename T>
struct LowLink {
private:
    const vector<vector<T>> &g;
    vector<int> used, ord, low;
    
    int dfs(int idx, int k, int par) {
        used[idx] = true;
        ord[idx] = k++;
        low[idx] = ord[idx];
        bool is_articulation = false;
        int cnt = 0;
        for(auto &to : g[idx]) {
            if (!used[to]) {
                ++cnt;
                k = dfs(to, k, idx);
                low[idx] = min(low[idx], low[to]);
                is_articulation |= ~par && low[to] >= ord[idx];
                if (ord[idx] < low[to]) bridge.emplace_back(minmax(idx, (int)to));
            }