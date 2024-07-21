int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n;
    cin >> n;
    ll cnt = 0;
    rep(i, n) {
        ll d1, d2;
        cin >> d1 >> d2;
        if (d1 == d2) {
            cnt++;
        }