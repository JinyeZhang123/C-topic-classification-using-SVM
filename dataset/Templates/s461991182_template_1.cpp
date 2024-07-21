template<typename T>
class TopologicalSort {
private:
    map<T, bool> is;
    map<T, vector<T>> g;
    vector<T> tsort;
	map<T, long long> inCnt;
    void dfs(T now) {
        if (is[now]) return;
		is[now] = true;
        for (auto &&el : g[now]) {
            dfs(el);
        }