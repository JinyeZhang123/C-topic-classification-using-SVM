int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n, k, r, s, p;
    string t;
    cin >> n >> k >> r >> s >> p >> t;
    ll ans = 0;
    vector<bool> dp(n, false);
    rep(i, n) {
        ll bef = i - k;
        if ((bef < 0) || ((t[bef] != t[i]) || (!dp[bef]))) {
            if (t[i] == 'r') {
                ans += p;
            }