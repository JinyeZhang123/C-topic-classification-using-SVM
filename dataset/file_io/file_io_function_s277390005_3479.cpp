signed main() {
#ifdef LOCAL
    ifstream in("in_2.txt");
    cin.rdbuf(in.rdbuf());
#else
    cin.tie(0);
    ios::sync_with_stdio(false);
#endif

    /* input part */
    long long K;
    cin >> K;

    /* write your code!*/
    vector<vector<pint>> G(K);
    rep(i, K) {
        G[i].emplace_back((i + 1) % K, 1);
        G[i].emplace_back((i * 10) % K, 0);
    }