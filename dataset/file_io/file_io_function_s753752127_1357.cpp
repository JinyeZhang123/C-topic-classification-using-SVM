int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    const ll mod = 998244353;
    ll n, a, b, k;
    cin >> n >> a >> b >> k;
    ll ans = 0;
    BinomialCoefficient bc(n);
    rep(acnt, n + 1) {
        ll rem = k - acnt * a;
        if (rem % b != 0) continue;
        ll bcnt = rem / b;
        if (bcnt > n) continue;
        ans = (ans + bc.combination(n, acnt) * bc.combination(n, bcnt)) % mod;
    }