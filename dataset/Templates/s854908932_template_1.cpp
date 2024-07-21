template<class V> struct MaxFlow {
    struct edge { int to, reve; V cap; edge(int t, int r, V c) : to(t), reve(r), cap(c) {}