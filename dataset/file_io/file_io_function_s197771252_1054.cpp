int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int N, K;
    cin >> N >> K;
    vector<int> P(N);
    REP(i, N) {cin >> P[i]; P[i]--;}