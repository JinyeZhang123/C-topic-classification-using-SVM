template <class T> struct RangeAddFenwickTree {

   vector<T> node1, node2;
   RangeAddFenwickTree (int n) : node1(n,0), node2(n,0) {}