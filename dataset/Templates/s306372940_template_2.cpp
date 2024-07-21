template <class T>
T LeastCommonMultiple(T a, T b)
{
  // a must be less than b
  if (a > b) std::swap(a, b);

  T lcm = b;
  while (lcm % a != 0) {
    lcm += b;
  }