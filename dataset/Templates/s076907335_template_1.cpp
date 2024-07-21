template <typename T>
class BellmanFord {
    struct edge {
        int from;
        int to;
        T cost;
    }