int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll m;
    cin >> m;
    ll fig = 0, sum = 0;
    rep(i, m) {
        ll d, c;
        cin >> d >> c;
        fig += c;
        sum += d * c;
    }