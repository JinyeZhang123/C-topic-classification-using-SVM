int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // std::ifstream in("input.txt");
    // std::cin.rdbuf(in.rdbuf());
    ll n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    rep(i, n) {
        ll fv = a + i * d - (n - 1 - i) * c;
        ll sv = a + i * c - (n - 1 - i) * d;
        if ((b >= sv) && (b <= fv)) {
            cout << "YES" << endl;
            return 0;
        }