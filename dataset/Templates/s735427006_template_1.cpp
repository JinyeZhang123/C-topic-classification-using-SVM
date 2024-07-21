template<typename T>
class ShortestPath{
  public:
    class Edge{
      public:
        T val;
        int to;
        Edge(T v, int t):val(v), to(t){}