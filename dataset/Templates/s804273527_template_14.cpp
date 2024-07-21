template<typename T> class RAQ {
   private:
      BIT<T> bit;
   public:
      RAQ(int n) : bit(n) {}