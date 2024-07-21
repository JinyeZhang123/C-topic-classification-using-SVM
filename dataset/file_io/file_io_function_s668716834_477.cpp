int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll bad = 0;
    rep(i, n) {
        if (s[i] == 'L') {
            if ((i == 0) || (s[i - 1] == 'R')) {
                bad++;
            }