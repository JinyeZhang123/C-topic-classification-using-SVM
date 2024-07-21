int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int N;
    cin >> N;
    vector<int> X(N), Y(N);
    vector<char> U(N);
    REP(i, N){
        cin >> X[i] >> Y[i] >> U[i];
    }