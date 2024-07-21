int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    vector<pair<ll, ll>> cnt(n);
    vector<vector<ll>> acnt(50, vector<ll>(50, 0));
    rep(i, n) {
        string s;
        cin >> s;
        ll period = -1, tmp = 0;
        rep(j, len(s)) {
            if (s[j] == '.') {
                if (period == -1) period = j;
                continue;
            }