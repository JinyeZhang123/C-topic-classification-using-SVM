class Prime {
private:
  vector<long long> divisor;
  
public:
  Prime(long long n) {
    for (long long i = 0; i < n; ++i) divisor.emplace_back(i);
    for (long long i = 2; i <= n / i; ++i) if (divi