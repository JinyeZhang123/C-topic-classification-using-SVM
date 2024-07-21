template<typename T>
vector<T> getPrime(T x)
{
  vector<T> div;

  for (int i = 2; i*i <= x; ++i) {
    if (x % i == 0) {
      div.emplace_back(i);
      while (x % i == 0) x /= i;
    }