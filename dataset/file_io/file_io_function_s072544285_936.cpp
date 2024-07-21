int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    rep(i, n) {
        string ss = s.substr(i);
        auto za = z_algorithm(ss);
        reps(j, 1, n - i) {
            ans = max(ans, min(j, (ll)za[j]));
        }