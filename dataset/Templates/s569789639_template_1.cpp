template <typename T>
T fact(T a, T modulus){ int res = 1, i; for (i = 2; i <= a; i++){ res *= i; res%=modulus;}