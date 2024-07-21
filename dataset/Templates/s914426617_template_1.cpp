template<typename T>
int find(T& uftree, int index) {
  int res = index;
  while( uftree.node[res].parent != res ) {
    res = uftree.node[res].parent;
  }