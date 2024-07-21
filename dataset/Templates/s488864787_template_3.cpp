template <class T>
struct Dinic {
    struct edge {
        int to, rev;
        T cap;
        edge(int to, int rev, T cap) : to(to), rev(rev), cap(cap) {}