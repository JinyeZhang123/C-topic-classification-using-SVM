int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int N;
    cin >> N;
    vector<ll> A(N);
    REP(i, N) cin >> A[i];

    ll X = 0;
    REPN(i, 2, N) X ^= A[i];
    ll S = A[0] + A[1];
    ll D = (S - X) / 2;

    if ((D & X) > 0 || D < 0 || D > A[0] || (S - X) % 2){
        print(-1);
        return 0;
    }