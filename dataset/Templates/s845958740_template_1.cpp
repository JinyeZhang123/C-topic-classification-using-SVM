template<typename T>
struct Dijkstra {
    explicit Dijkstra(size_t size) : size(size), G(size) {}