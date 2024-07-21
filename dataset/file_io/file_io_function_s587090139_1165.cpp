int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif
    int N;
    cin >> N;
    vector<int> A(N);
    REP(i, N) cin >> A[i];

    int cur = 2;
    ll ans = A[0] - 1;
    REPN(i, 1, N){
        if (A[i] == cur){
            cur++;
        }