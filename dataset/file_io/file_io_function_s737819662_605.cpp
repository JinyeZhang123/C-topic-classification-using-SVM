int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    string s;
    cin >> s;
    ll ans = 0;
    string bef = "", cur = "";
    rep(i, len(s)) {
        cur += s[i];
        if (cur != bef) {
            bef = cur;
            ans++;
            cur = "";
        }