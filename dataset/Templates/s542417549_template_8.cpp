template <typename T>
T min(T a, T b, T c)
{
  return min(min(a, b), c);
}