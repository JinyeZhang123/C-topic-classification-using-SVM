template <typename T> class Dinic {
private:
  int n;
  std::vector<std::vector<Edge<T>>> g;
  std::vector<int> distance; // 辺の重みを1としたときの距離
  std::vector<int> next_idx; // 各頂点から出る辺についてどこまでチェックしたか

public:
  Dinic(int n) : n(n), g(n), distance(n), next_idx(n) {}