template <typename T>
struct RMQ {
  const T INF = numeric_limits<T>::max();
  int n;
  vector<T> dat, lazy;
  RMQ(int _n) : n(), dat(_n*4,INF), lazy(_n*4,INF) {
    int x = 1;
    while (x < _n) x <<= 1;
    n = x;
  }