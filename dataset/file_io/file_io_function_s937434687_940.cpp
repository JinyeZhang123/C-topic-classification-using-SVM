int main() {
#ifdef LOCAL
    ifstream in("../arg.txt");
    cin.rdbuf(in.rdbuf());
#endif

    int N;
    cin >> N;
    vector<int> S(N);
    REP(i, N) cin >> S[i];

    ll ans = 0;
    REPN(C, 1, N) {
        ll dp = 0;
        vector<bool> used(N, false);

        for (int k=1; N - 1 - (k+1) * C > 0; k++) {
            if (used[k * C]) break;
            dp += S[k * C];
            used[k * C] = true;

            if (used[N - 1 - k * C]) break;
            dp += S[N - 1 - k * C];
            used[N - 1 - k * C] = true;

            ans = max(dp, ans);
        }