template <class T> 
struct UnionFind {
  vector<int> data;
  vector<T> val;
  UnionFind(int size) : data(size, -1), val(size) {
    REP(i,size) {
      val[i] = i;
    }