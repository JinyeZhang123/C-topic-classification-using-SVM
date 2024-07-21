template <typename T>
void Add(T &a, const T &b) {
    int val = ((a % MOD) + (b % MOD)) % MOD;
    if (val < 0) {
        val += MOD;
    }