int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    int N; cin >> N;
    string s, t; cin >> s >> t;
    
    int res = 2*N, cnt = 0;
    repm(i, 0, N) {if(s.substr(N-1-i, i+1) == t.substr(0, i+1)) chmax(cnt, i+1);}