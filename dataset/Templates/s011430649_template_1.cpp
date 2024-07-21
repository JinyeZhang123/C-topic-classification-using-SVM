template<typename T>
struct FlowGraph {
private:
  struct edge {
    const int to;
    T cap;
    const int r_idx;
    edge(int t, T c, int i) :
      to(t), cap(c), r_idx(i) {}