template <typename T>
struct FordFulkerson{
    // 行先、容量、逆辺の番号
    struct edge{
        int to, rev;
        T cap;
        edge() = default;
        edge(int to, T cap, int rev) : to(to), cap(cap), rev(rev) {}