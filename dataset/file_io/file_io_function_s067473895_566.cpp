int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    string x;
    cin >> n >> x;
    reverse(all(x));
    ll pc = 0;
    rep(i, n) pc += x[i] - '0';
    vector<vector<ll>> raw(3, vector<ll>(n + 1, 0));
    vector<vector<ll>> ket(3, vector<ll>(n + 1, 1));
    rep(i, n) {
        rep(j, 3) {
            if ((pc + (j - 1)) <= 0) continue;
            raw[j][i + 1] = (raw[j][i] + (x[i] - '0') * ket[j][i]) % (pc + (j - 1));
            ket[j][i + 1] = (ket[j][i] * 2) % (pc + (j - 1));
        }