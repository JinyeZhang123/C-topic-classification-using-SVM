template<typename T> class RMQ {
   private:
      SegmentTree<T,function<T(T,T)>> segt;
   public:
      RMQ(int n, T inf) : segt(n, [](T a,T b){return min(a,b);}