template<typename T>
struct Dinic {
        struct Edge {
                int to, rev;
                T cap;
                Edge () {}