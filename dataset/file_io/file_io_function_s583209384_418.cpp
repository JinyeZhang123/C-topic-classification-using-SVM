int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<pair<char, char>> td(q);
    rep(i, q) cin >> td[i].first >> td[i].second;
    s = '*' + s + '*';
    ll l = 0, r = n + 1;
    while((l + 1) < r) {
        ll m = (l + r) / 2;
        ll pos = m;
        rep(i, q) {
            if (td[i].first != s[pos]) continue;
            if (td[i].second == 'L') pos--;
            else pos++;
        }