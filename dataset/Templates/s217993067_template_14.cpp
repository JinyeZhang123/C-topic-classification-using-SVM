template<typename T> class RSQ {
   private:
      BIT<T> bit;
   public:
      RSQ(int n) : bit(n) {}