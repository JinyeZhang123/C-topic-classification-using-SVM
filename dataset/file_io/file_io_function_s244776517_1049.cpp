int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    vector<int> A(3);
    REP(i, 3) cin >> A[i];
    sort(ALL(A));

    if (A[2] - A[1] == A[1] - A[0]){
        print("YES");
    }