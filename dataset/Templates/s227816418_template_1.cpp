template<class T>
struct Graph {
    const int n, s;
    const T INF;
    bool is_neg_cycle;
    std::vector<std::vector<std::pair<int, T>>> adj;
    std::vector<T> d;

    Graph(int _n, int _s)
        : n(_n), s(_s), INF(std::numeric_limits<T>::max()),
          is_neg_cycle(false), adj(n), d(n, INF) { }