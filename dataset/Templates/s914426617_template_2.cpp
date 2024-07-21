template<typename T>
void unite(T& uftree, int n1, int n2) {
  int p1 = find(uftree, n1);
  int p2 = find(uftree, n2);
  if( p1 == p2 ) return;
  if( uftree.node[p1].rank < uftree.node[p2].rank ) {
    uftree.node[p1].parent = p2;
  }