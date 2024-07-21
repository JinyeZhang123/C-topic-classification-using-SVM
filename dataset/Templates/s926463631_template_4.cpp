template <typename T, typename Y> inline T mpow(T a, Y n) {
  T res = 1;
  for(; n; n >>= 1) {
    if(n & 1) res = res * a;
    a = a * a;
  }