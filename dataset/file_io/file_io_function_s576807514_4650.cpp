int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    int N; cin >> N;
    int A[N], B[N];
    rep(i, N) cin >> A[i] >> B[i];
    sort(A, A+N);
    sort(B, B+N);
    
    double Am = N%2 == 0 ? (A[N/2-1] + A[N/2])/2. : A[(N-1)/2];
    double Bm = N%2 == 0 ? (B[N/2-1] + B[N/2])/2. : B[(N-1)/2];
    int res = N%2 == 0 ? (Bm-Am)*2 + 1 : Bm-Am+1;
    cout << res << endl;
}