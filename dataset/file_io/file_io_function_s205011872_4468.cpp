int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    string S; cin >> S;
    int s = (int)(S.size());
    
    int res = 0;
    rep(i, s/2-1){ if(S.substr(0, s/2-1-i) == S.substr(s/2-1-i, s/2-1-i)) {res = s-2-2*i; break;}