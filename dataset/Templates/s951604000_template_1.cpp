template<class Capacity = int> struct FordFulkerson {
    typedef vector<vector<Capacity>> Matrix;
    size_t n;
    Matrix cap, flow;
    vector<bool> vis;
    Capacity res;
    vector<vector<int>> g;
    FordFulkerson(const int s, const int t, const Graph &graph) :
        n(graph.size()), cap(n, Array(n)), flow(n, Array(n)), res(0), g(n) {
        rep(i,n)rep(j,graph[i].size()){
            int u = graph[i][j].src, v = graph[i][j].dst;
            cap[u][v] = flow[u][v] = graph[i][j].cap;
        }