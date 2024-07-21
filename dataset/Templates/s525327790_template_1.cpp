template<class flow_t>
struct ford_fulkerson{
  struct edge{
    int to;
    flow_t cap;
    int rev;
    edge(){}