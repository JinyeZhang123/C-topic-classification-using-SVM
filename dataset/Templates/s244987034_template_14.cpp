template<typename T> struct RMQ {
   SegmentTree<T> segt;
   RMQ(int n, const T& inf) : segt(n, [](T a,T b){return min(a,b);}