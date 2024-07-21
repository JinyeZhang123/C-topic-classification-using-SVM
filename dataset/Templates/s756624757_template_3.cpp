template<typename T>
struct edge {
    int src, to;
    T cost;
    // edge(int src, int to, T cost): src(src), to(to), cost(cost) {}