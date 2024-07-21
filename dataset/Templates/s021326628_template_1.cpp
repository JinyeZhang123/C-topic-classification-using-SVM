template <typename T>
struct Edge {
    int to; T cap, cost; int rev;
    Edge(int t, T c, int r) : to(t), cap(c), rev(r) {}