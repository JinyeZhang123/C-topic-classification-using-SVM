template<typename T,bool directed>
struct Fordfulkerson{
  struct edge{
    ll to,cap,rev;
    edge(){}