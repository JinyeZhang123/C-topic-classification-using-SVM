template<typename T> inline T ceil(T a, T b) {
  return floor(a + b - 1, b);
}