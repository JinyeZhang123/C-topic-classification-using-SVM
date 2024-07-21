template<class T> struct BellmanFord{

    struct Edge{
        int from,to;
        T cost;
        Edge(int from,int to,T cost):from(from),to(to),cost(cost){}