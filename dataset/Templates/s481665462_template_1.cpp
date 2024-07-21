template <typename T>
struct RMQ {
  const T INF = numeric_limits<T>::max();
  int n;
  vector<T> dat, lazy;
  RMQ(int size) : n(), dat(size * 4, INF), lazy(size * 4, INF) {
    int x = 1;
    while (size > x) {
      x *= 2;
    }