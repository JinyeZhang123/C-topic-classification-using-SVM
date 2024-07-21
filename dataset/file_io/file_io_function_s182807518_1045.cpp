int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int N;
    cin >> N;
    vector<P> A(N);
    REP(i, N) {
        cin >> A[i].first;
        A[i].second = i;
    }