int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int T;
    cin >> T;

    REP(_, T){
        int N;
        cin >> N;
        vector<ll> A(N);
        REP(i, N) cin >> A[i];
        string S;
        cin >> S;

        vector<ll> basis;
        int ans = 0;

        REP_REV(i, N){
            ll x = A[i];
            for (auto b: basis){
                x = min(x, x ^ b);
            }