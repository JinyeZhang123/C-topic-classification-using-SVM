int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    int N; cin >> N;
    map<int, int> D;
    rep(i, N) {int d; cin >> d; D[d]++;}