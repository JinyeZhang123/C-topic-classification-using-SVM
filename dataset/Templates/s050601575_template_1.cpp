template<typename T>
struct Kruskal{
  
  struct edge{
    int from,to;
    T cost;
    int used;
    edge(){}