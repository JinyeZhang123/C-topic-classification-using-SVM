template <typename T>
struct EdmondsKarp {
    struct Edge {
        int from;
        int to;
        T cap;
    }