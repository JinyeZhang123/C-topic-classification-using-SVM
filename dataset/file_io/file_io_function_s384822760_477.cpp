int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll n, k;
    cin >> n >> k;
    ll mc = (n - 1) * (n - 2) / 2;
    if (k > mc) {
        cout << -1 << endl;
        return 0;
    }