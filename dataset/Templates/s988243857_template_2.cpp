template <class T>
T lcm(const T &a, const T &b)
{
  T g = gcd(a, b);
  return a / g * b;
}