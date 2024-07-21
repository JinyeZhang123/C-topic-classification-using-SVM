template<typename T>
struct BIT {
  std::vector<T> A;
  BIT(int n):A(n, 0){}