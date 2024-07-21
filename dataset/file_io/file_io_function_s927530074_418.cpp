int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string ls = s.substr(0, n);
    string rs = s.substr(n, n);
    reverse(all(rs));
    map<pair<string, string>, ll> lcnt;
    rep(i, 1 << n) {
        string ls1 = "", ls2 = "";
        rep(ii, n) {
            if ((i & (1 << ii)) != 0) {
                ls1 += ls[ii];
            }