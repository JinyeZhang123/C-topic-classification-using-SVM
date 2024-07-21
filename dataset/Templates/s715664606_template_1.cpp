template<typename T>
//templateをつかってみｔか
ll pow(T x, int y) {
    if (y == 0) return 1;
    if (y == 1) return x;
    if (y == 2) return (x * x) % MOD;
//        if (y % 2 == 1) return pow(x, y / 2) * pow(x, y / 2) % MOD;
    if (y % 2 == 1) return pow(pow(x, y / 2), 2) * x % MOD;
//        return pow(x, y / 2) * pow(x, y / 2) % MOD;
    return pow(pow(x, y / 2), 2) % MOD;
}