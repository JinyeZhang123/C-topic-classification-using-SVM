template<typename T> class RUQ {
   private:
      SegmentTree<T,function<T(T,T)>> segt;
   public:
      RUQ(int n, T inf) : segt(n, [](T a,T b){return min(a,b);}