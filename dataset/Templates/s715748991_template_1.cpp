template<class T> struct BellmanFord {
  struct Edge {
    int from,to;
    T cost;
    Edge (int f, int t, T c) : from(f), to(t), cost(c) {}