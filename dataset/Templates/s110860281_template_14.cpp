template<typename T> class RUQ
{
   private:
      int t = 0;
      SegmentTree<P<T,T>,function<P<T,T>(P<T,T>,P<T,T>)>> st;
   public:
      RUQ(int sz, T init) : st(sz, [](P<T,T> a,P<T,T> b){return max(a,b);}