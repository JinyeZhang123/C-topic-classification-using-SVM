int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    string t;
    cin >> t;
    ll n = len(t);
    rep(i, n) {
        if (t[i] == '?') t[i] = 'D';
    }