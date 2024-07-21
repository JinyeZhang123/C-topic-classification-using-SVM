int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    int N; cin >> N;
    int fg = 0;
    int A[N];
    int res = 1;
    rep(i, N) {
        cin >> A[i];
        if(i > 0 && fg == 0){
            if(A[i] > A[i-1]) fg = 1;
            if(A[i] < A[i-1]) fg = -1;
        }