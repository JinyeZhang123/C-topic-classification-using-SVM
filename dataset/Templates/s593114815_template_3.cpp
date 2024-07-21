template <typename X>
struct Node{
  int idx;
  int par;
  X depth;
  
  Node() = default;

  explicit Node(int idx) : idx(idx) {}