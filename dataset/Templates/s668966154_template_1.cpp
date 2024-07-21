template <typename T>
struct Edge {
  using value_type = T;
  int from, to;
  value_type val;
  Edge(int from, int to, value_type val = 1) : from(from), to(to), val(val) {}