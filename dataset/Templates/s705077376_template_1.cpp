template <typename T>
struct BipartiteMatching {
  struct Edge {
    int to, rev; T cap;
    Edge(int to, int rev, T cap) : to(to), rev(rev), cap(cap) { }