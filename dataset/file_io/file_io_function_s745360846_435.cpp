int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    //std::ifstream in("input.txt");
    //std::cin.rdbuf(in.rdbuf());
    string S, K; cin >> K;
    rep(i, K.length()) S += K[K.length() - 1 - i];
    //cout << S << endl;
    rep(i, 26) rep(j, 200010) prv[i][j] = 0;
    rep(i, 200010) dp[i] = INF;
    rep(i, S.length()) {
        rep(j, 26) {
            prv[j][i + 2] = prv[j][i + 1];
        }