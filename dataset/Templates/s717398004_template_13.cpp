template<typename T, typename F> class SegmentTree
{
   private:
      int n;
      vector<T> node;
      F f;
   public:
      SegmentTree(int sz, const F& func, T inf) : f(func) {
         n = 1; while(n < sz) n *= 2;
         node.resize(2*n-1, inf);
      }