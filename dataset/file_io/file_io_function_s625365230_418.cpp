int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> cnt;
    rep(i, n) {
        cin >> a[i];
        cnt[a[i]]++;
    }