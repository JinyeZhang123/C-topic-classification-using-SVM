template <class T> struct FenwickTree {
   vector<T> node;
   FenwickTree(int n) : node(n,0) {}