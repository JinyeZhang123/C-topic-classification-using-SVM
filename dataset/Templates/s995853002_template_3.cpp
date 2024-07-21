template <class T>
vector<T> factorize(T n) {
  vector<T> res;
  for (ll i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      res.push_back(i);
      while (n % i == 0) n /= i;
    }