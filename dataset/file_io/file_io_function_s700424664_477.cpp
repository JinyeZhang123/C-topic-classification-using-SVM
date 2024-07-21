int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll m, k;
    cin >> m >> k;
    if (k == 0) {
        rrep(i, 1 << m) printf("%lld ", i);
        rep(i, 1 << m) printf("%lld%s", i, (i == ((1 << m) - 1)) ? "\n" : " ");
        return 0;
    }