int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int N, K;
    cin >> N >> K;
    vector<ll> A(N);
    REP(i, N) cin >> A[i];
    sort(ALL(A));

    auto check = [&](int x){

        vector<bool> dp(K);

        dp[0] = true;
        REP(i, N){
            if (i == x) continue;
            REP_REV(j, K-A[i]){
                dp[j + A[i]] = dp[j + A[i]] | dp[j];
            }