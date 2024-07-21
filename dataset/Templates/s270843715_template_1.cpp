template <typename T>
struct Edge {
    int to; T cap; int rev;
    Edge(int t, T c, int r) : to(t), cap(c), rev(r) {}