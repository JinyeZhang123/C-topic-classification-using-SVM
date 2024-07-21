template <typename T>
struct Edge {
    int from, to;
    T cost;
    Edge(int s, T d) : to(s), cost(d) {}