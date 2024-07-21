int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int N;
    cin >> N;
    vector<ull> A(N);
    REP(i, N) cin >> A[i];

    ull allxor = 0;
    REP(i, N) allxor ^= A[i];
    REP(i, N) A[i] &= ~allxor;

    ull res = allxor + 2 * maxSubarrayXOR(A, N);
    print(res);

    return 0;
}