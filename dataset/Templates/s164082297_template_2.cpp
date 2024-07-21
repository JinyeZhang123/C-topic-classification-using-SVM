template <typename T>
Dijkstra<T>::Dijkstra(int n, bool dir)
    : isDir(dir),
    V(n + 1),
    adj(vector<vector<Edge>>(V)),
    prever(vector<int>(V, -1)),
    cost(vector<T>(V)) {
        fill(cost.begin(), cost.end(), INF);
    }