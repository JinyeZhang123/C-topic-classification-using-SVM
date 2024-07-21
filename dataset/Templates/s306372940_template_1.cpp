template <class T>
T GreatestCommonDivisor(T a, T b)
{
  // a must be less than b
  if (a > b) std::swap(a, b);

  while (a != 0) {
    T tmp = b % a;
    b = a;
    a = tmp;
  }