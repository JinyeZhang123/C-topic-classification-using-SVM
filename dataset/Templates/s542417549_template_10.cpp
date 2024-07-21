template <typename T>
T mul_mod(T a, T b, T mod)
{
  T res = 0;
  a %= mod;
  while (b)
  {
    if (b & 1)
    {
      res = (res + a) % mod;
    }