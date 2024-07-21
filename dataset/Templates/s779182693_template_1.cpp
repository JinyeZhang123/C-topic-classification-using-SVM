template< typename T >
struct BinaryIndexedTree {
  vector< T > data;
  BinaryIndexedTree(int sz) {
    data.assign(++sz, 0);
  }