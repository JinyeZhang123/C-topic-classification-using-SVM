int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);

    //ifstream in("Sample.txt");
    //cin.rdbuf(in.rdbuf());

    int N, Q;
    string S;
    cin >> N >> S >> Q;
    vector<set<int>> M(26);

    REP(i, N) {
        M[S[i] - 'a'].insert(i);
    }