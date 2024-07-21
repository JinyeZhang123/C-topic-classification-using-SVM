int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    // ifstream cin ("test.in");
    // ofstream cout ("test.out");
    cin >> n;
    for (int i=1; i<=n; ++i) cin >> a[i].x >> a[i].d;
    sort(a+1, a+n+1);
    // for (int i=1; i<=n; ++i) cout << a[i].x << ' ' << a[i].d << '\n';
    // cout << '\n';
    dp[n + 1] = 1;
    for (int i=n; i; --i){
        int idx = bs1(i, a[i].x + a[i].d);
        update(1, 1, n, i, idx);
        idx = query(1, 1, n, i, idx - 1);
        update(1, 1, n, i, idx);
        // cout << i << ' ' << idx << '\n';
        // farthest[i] = idx;
        dp[i] = (dp[i+1] + dp[idx]) % MOD;
    }