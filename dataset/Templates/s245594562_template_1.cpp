template <typename T>
struct Diameter {
    struct Edge {
        int to;
        T cost;
        Edge(int to, T cost) : to(to), cost(cost) { }