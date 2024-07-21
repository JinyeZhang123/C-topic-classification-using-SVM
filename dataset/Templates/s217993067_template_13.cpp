template<typename T> class BIT
{
   private:
      vector<T> bit;
      int len;
   public:
      BIT(int n) {
         len = n+1;
         bit.resize(len);
      }