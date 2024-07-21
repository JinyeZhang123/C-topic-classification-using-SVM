template <typename T>
class Dijkstra {
    private:
        bool isDir = false;  // 無向グラフ: false, 有向グラフ: true
        T INF = numeric_limits<T>::max();
        int V;                     // 頂点数
        vector<vector<Edge>> adj;  // adj[始点][動的配列で始点から伸びる枝]
        vector<int> prever;

    public:
        Dijkstra(int n, bool dir);
        vector<T> cost;
        void AddEdge(int f, int t, int c);
        bool HasPath(int t);                 // tに至るパスはあるか
        vector<int> getShortestPath(int t);  // tへの最短路
        void Run(int f);
}