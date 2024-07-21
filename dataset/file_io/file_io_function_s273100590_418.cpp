int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    ll ans = 0;
    rep(i, n) {
        bool f = true;
        rep(ii, n) {
            rep(iii, n) {
                if (s[ii][(iii + (n - i)) % n] != s[iii][(ii + (n - i)) % n]) {
                    f = false;
                    break;
                }