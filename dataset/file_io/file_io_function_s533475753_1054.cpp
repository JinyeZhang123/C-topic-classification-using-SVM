int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    REP(i, N) cin >> A[i];

    REP(k, K){

        vector<int> imos(N+1);
        vector<int> B(N);
        REP(i, N){
            int l = max(0, i - A[i]);
            int r = min(N, i + A[i] + 1);
            imos[l]++;
            imos[r]--;
        }