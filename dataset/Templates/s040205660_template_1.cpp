template <typename T>
struct Edge {
  int64_t from;
  int64_t to;
  T cost;
  Edge(int64_t from_, int64_t to_, T cost_)
      : from(from_), to(to_), cost(cost_) {}