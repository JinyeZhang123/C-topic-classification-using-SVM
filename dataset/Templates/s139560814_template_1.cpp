template <typename T>
T gcd(T m, T n) {  // m > 0, n > 0
  if (m < n) swap(m, n);
  while (n > 0) {
    T r = m % n;
    m = n;
    n = r;
  }