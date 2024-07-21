template<typename T,bool directed>
struct FordFulkerson{
    struct edge{
        int to,rev; T cap;
        edge(int to,T cap,int rev):to(to),cap(cap),rev(rev){}