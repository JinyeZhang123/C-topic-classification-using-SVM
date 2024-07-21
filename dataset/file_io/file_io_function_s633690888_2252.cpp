int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    // ifstream cin(".in");

    fact[0] = 1;
    fori (i, maxn - 1) fact[i + 1] = fact[i] * (i + 1) % MOD;
    ifact[maxn - 1] = poww(fact[maxn - 1], MOD - 2);
    forir (i, maxn - 1) ifact[i] = ifact[i + 1] * (i + 1) % MOD;
    pow2[0] = 1;
    fori (i, maxn - 1) pow2[i + 1] = pow2[i] * 2 % MOD;

    cin >> n;
    ll bad = 0;
    fori (i, n / 2) {
        Add(bad, ent(i, n) * pow2[i]);
    }