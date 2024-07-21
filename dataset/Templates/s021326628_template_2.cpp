template<typename T>
struct Dinic {
    int N, M;
    Graph<T> G;
    vector<int> level, iter;
    Dinic(int n, int m) : N(n), M(m) {
        G.resize(N);
        level.resize(N);
        iter.resize(N);
    }