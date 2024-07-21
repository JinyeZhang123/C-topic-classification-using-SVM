int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> black(k, vector<ll>(k, 0)), white(k, vector<ll>(k, 0));
    rep(i, n) {
        ll x, y;
        char c;
        cin >> x >> y >> c;
        x %= 2 * k;
        y %= 2 * k;
        if (x >= k) {
            x -= k;
            c = ((c == 'B') ? 'W' : 'B');
        }