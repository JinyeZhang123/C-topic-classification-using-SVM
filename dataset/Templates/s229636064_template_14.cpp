template<typename T> struct RUQ {
   LazySegmentTree<T> lsegt;
   RUQ(int n, int init) : lsegt(n,
      [](int a,int b){ return min(a,b); }