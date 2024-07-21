int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    string S; cin >> S;
    rep(i, (int)(S.size())) {if(S[i] == '?') S[i] = 'D';}