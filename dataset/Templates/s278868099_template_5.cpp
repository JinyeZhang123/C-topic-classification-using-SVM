template<typename Type>
  RollingHash(int base, int n, Type *arr): N(n), base(base), hash(n + 1), pow(n + 1) {
    hash[0] = 0;
    pow[0] = 1;
    for (int i = 0; i < N; i++) {
      hash[i + 1] = (hash[i] + arr[i]) * base % mod;
      pow[i + 1] = pow[i] * base % mod;
    }