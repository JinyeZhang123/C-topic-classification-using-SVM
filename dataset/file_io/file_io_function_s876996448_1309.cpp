int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(10);

    // ifstream in("in.txt");
    // cin.rdbuf(in.rdbuf());

    int H, W; cin >> H >> W;
    vector<string> S(H);
    REP(i, H) cin >> S[i];

    ll ans = 0;

    REP(c, W-1) {
        vector<vector<int>> cost1(H+1), cost2(H+1);
        REP(k, H+1) {
            cost1[k].resize(H-k+1);
            cost2[k].resize(H-k+1);
            for (int i = 0; i + k < H; ++i) {
                cost1[k][i+1] = cost1[k][i] + (S[i][c] == S[i+k][c+1]);
                cost2[k][i+1] = cost2[k][i] + (S[i+k][c] == S[i][c+1]);
            }