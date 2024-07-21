template<typename T> class RMQ_RUQ {
   private:
      SegmentTree<T,function<T(T,T)>> segt;
   public:
      RMQ_RUQ(int n, T inf) : segt(n, [](T a,T b){return min(a,b);}