template <typename T>
void exgcd(T x, T y, T &a, T &b, T &c) {
  T r0 = x, r1 = y;
  T a0 = 1, a1 = 0;
  T b0 = 0, b1 = 1;

  while (r1 > 0) {
    T q1 = r0 / r1;
    T r2 = r0 % r1;
    T a2 = a0 - q1 * a1;
    T b2 = b0 - q1 * b1;
    r0 = r1, r1 = r2;
    a0 = a1, a1 = a2;
    b0 = b1, b1 = b2;
  }