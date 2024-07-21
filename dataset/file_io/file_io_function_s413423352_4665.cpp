int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N, K; cin >> N >> K;
    vector<int> A(N); rep(i, N) cin >> A[i];
    
    rep(i, min(K, 100)){
        vector<int> Ac(N, 0);
        rep(j, N){
            if(j-A[j] > 0) Ac[j-A[j]]++; else Ac[0]++;
            if(j+A[j]+1 < N) Ac[j+A[j]+1]--;
        }