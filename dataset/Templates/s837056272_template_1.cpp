template <typename T> struct Edge {
  T dst, cost;
  Edge(int dst, int cost) : dst(dst), cost(cost) {}