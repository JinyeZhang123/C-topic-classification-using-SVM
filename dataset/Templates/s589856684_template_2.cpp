template<class T> T binPow(T p, int q, int MOD) {
    if(q == 1) return p % MOD;
    if(q & 1) return p*(binPow(p, q-1, MOD) % MOD) % MOD;
    else return sqr(binPow(p, q/2, MOD) % MOD) % MOD;
}