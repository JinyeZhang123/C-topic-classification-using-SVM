int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    int c[3][3];
    rep(i, 3){rep(j, 3) cin >> c[i][j];}