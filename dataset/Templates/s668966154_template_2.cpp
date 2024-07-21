template <typename CostType>
struct Graph {
  using value_type = std::vector<Edges<CostType>>;
  const int V;
  value_type G;
  Graph(int V) : V(V), G(V) {}