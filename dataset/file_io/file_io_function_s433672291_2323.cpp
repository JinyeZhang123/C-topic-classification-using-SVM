int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    vector<ll> h(n), a(n);
    rep(i, n) cin >> h[i];
    rep(i, n) cin >> a[i];
    Compress<ll> ch(h);
    auto lop = [](ll a, ll b){ return b; }