int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    string s, t;
    ll q;
    cin >> s >> t >> q;
    ll ns = len(s), nt = len(t);
    vector<ll> sdp(ns + 1, 0), tdp(nt + 1, 0);
    rep(i, ns) {
        sdp[i + 1] = sdp[i] + ((s[i] == 'B') ? 2 : 1);
    }