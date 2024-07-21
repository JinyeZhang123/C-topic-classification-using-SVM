int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    int H, W;
    cin >> H >> W;
    string S[H];
    rep(i, H) cin >> S[i];
    
    string res = "Yes";
    int dx[] = {1, 0, -1, 0}