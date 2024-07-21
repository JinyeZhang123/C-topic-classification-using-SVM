int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll t;
    cin >> t;
    rep(i, t) cout << (solve() ? "Yes" : "No") << endl;
    return 0;
}