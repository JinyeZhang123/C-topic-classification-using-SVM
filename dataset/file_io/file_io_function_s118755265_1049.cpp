int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int N, T;
    cin >> N >> T;
    vector<int> A(N);
    REP(i, N) cin >> A[i];

    ll ans = 0;
    ll l = 0;
    ll r = 0;
    REP(i, N){
        if (r < A[i]){
            ans += r - l;
            l = A[i];
            r = A[i] + T;
        }