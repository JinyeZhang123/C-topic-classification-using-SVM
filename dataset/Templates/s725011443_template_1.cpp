template<typename T=long long>
struct edge {
public:
    int from;
    int to;
    T cost;
    edge(int from,int to,T cost):from(from),to(to),cost(cost){}