int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    int N, M; cin >> N >> M;
    vector<Pll> AB(N); rep(i, N) {ll A, B; cin >> A >> B; AB[i] = make_pair(A, B);}