int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    string s;
    cin >> n >> s;
    ll ans = 0;
    rep(i, n) {
        auto lcp = z_algorithm(s.substr(i));
        rep(j, n - i) {
            chmax(ans, min(j, (ll)lcp[j]));
        }