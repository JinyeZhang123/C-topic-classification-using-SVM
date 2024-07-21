int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    int N; cin >> N;
    int sub = 0;
    int A[2][N];
    rep(i, N) {cin >> A[0][i]; sub += A[0][i];}