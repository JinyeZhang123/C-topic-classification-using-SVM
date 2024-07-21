template<typename T>
struct BIT {
  int n;
  vector<T> d;
  BIT(int n=0) : n(n), d(n+1) {}