int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    string S; cin >> S;
    int s = (int)(S.size());
    string k = "keyence";
    
    string res = "NO";
    rep(i, 8) {if(S.substr(0, 7-i) + S.substr(s-i, i) == k) res = "YES";}