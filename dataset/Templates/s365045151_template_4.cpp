template<typename T>
class SegT {
private:
  vector<T> data;
  Monoid<T> monoid;
  int size = 1;

public:
  SegT(const int &n, const Monoid<T> &m = Monoid<int>(INF, [](int a, int b) { return min(a, b); }