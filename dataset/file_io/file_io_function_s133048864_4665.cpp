int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N; cin >> N;
    string X; cin >> X;
    int pcX = 0; rep(i, N) {if(ctoi(X[i])) pcX++;}