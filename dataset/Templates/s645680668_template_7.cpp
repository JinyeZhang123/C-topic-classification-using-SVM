template <int NV>
class SegTree
{
  int n;
  vector <Node> seg_tree;
  Node MAXNODE(){
    return Node(INT_MAX);
  }