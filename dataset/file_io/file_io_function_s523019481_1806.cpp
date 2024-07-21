int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    cin >> N >> M;
    A.assign(N, 0);
    REP(i, N) cin >> A[i];
    sort(ALL(A));

    cumsum.assign(N+1, 0);
    REP(i, N) cumsum[i+1] = A[i] + cumsum[i];

    // x以上の和の数がM以上になる最大のx
    ll ok = 0;
    ll ng = INF;
    while (ng - ok > 1){

        ll mid = (ok + ng) / 2;

        ll sm = 0;
        ll cnt = count_sum(mid, sm);
        if (cnt >= M){
            ok = mid;
        }