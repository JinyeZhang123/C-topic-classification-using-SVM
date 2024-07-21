int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N, M, K; cin >> N >> M >> K;
    vector<set<int>> fri(N), blo(N);
    rep(i, M) {
        int A, B; cin >> A >> B; A--; B--;
        fri[A].insert(B);
        fri[B].insert(A);
    }