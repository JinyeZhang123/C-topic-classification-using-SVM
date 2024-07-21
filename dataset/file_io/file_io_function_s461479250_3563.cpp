int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    START_TIME = clock();
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    cin >> DAY;
    rep(i, TYPE) cin >> C[i];
    rep(i, DAY) {rep(j, TYPE) cin >> S[i][j];}