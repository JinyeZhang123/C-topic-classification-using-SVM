template <typename T>
struct MaxFlow{
    struct edge{
        int to, rev;
        T cap;
        edge(int t, int r, T c):to(t),rev(r),cap(c){}