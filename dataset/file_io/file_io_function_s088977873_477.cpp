int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll stock = 0, money = 1000;
    rep(i, n) {
        // 購入
        {
            ll mv = a[i];
            bool exchange = false;
            reps(j, i + 1, n) {
                mv = min(mv, a[j]);
                if (a[j] > a[i]) {
                    exchange = true;
                    break;
                }