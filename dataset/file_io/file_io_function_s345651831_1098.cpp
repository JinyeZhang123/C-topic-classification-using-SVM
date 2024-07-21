int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    cin >> N >> T;
    W.assign(N, 0);
    V.assign(N, 0);
    REP(i, N) cin >> W[i] >> V[i];

    map<ll, ll> dp;
    dp[0] = 0;
    REP(i, N){
        auto dp_prev = dp;
        for (auto e: dp_prev){
            ll w = e.first;
            ll v = e.second;
            ll tmp = dp[w + W[i]];
            dp[w + W[i]] = max(tmp , v + V[i]);
        }