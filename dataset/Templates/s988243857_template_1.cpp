template <class T>
T gcd(const T &a, const T &b)
{
  if (b == 0) return a;
  return gcd(b, a % b);
}