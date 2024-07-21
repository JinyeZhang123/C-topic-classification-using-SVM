int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    int N, M; cin >> N >> M;
    int A[N], B[N]; rep(i, N) cin >> A[i] >> B[i];
    int C[M], D[M]; rep(i, M) cin >> C[i] >> D[i];
    
    rep(i, N){
        int md = INF, cnt = 0;
        rep(j, M) {
            int d = abs(A[i]-C[j]) + abs(B[i]-D[j]);
            if(md > d) {md = d; cnt = j+1;}