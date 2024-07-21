template<typename T>
struct Max_Flow{
    struct edge{
        int to; T cap; int rev;
        edge(int to, T cap, int rev) : to(to), cap(cap), rev(rev) {}