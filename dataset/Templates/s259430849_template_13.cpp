template<typename T> struct BIT {
   vector<T> bit;
   int len;
   BIT(int n) : len(n+1), bit(n+1) {}