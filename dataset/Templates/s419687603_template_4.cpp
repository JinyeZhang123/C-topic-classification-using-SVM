template <typename T>
class DIJKSTRA {
public:
    int V;

    struct dk_edge {
        int to;
        T cost;
    }