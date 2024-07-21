template <typename T>
struct Edge {
    
    Edge() = default;
    Edge(int from, int to, int cost) : from(from), to(to), cost(cost) {}