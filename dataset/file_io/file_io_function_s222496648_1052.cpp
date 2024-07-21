int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int N;
    cin >> N;
    vector<ll> X(N);
    REP(i, N) cin >> X[i];

    ll L;
    cin >> L;

    int tmp = 0;
    int log_n = (int)log2(N) + 1;
    vector<vector<int>> next(log_n+1, vector<int>(N+1, 0));
    REP(i, N){
        while (tmp < N-1 && X[tmp+1] - X[i] <= L) tmp++;
        next[0][i] = tmp;
    }