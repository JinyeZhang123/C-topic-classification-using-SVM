template <typename T>
void ADD(T &a, const T &b) {
    T val = ((a % MOD) + (b % MOD)) % MOD;
    a = val;
}