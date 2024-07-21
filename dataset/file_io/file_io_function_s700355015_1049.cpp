int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    ll N;
    cin >> N;
    vector<ll> A(3 * N);
    REP(i, 3 * N) cin >> A[i];

    priority_queue<ll, vector<ll>, greater<ll>> pq_l;
    priority_queue<ll, vector<ll>, less<ll>> pq_r;

    ll sum_l = 0, sum_r = 0;
    REP(i, N){
        pq_l.push(A[i]);
        sum_l += A[i];

        pq_r.push(A[3*N-i-1]);
        sum_r += A[3*N-i-1];
    }