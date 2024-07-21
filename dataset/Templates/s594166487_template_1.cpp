template<typename T> T gcd(T a, T b) {
  if(!b) return a;
  return gcd(b, a % b);
}