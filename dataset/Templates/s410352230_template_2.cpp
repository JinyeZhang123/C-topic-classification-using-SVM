template <typename T>
vector<T> sieve(const T& n) {
  vector<bool> is_prime(n + 1, true);
  vector<i64> prime;
  is_prime[0] = is_prime[1] = false;
  for (T i = 2; i <= n; i++) {
    if (is_prime[i]) {
      prime.emplace_back(i);
      for (T j = 2 * i; j <= n; j += i) is_prime[j] = false;
    }