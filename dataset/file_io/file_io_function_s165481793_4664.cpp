int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N; cin >> N;
    ll A, B, C, S; cin >> A >> B >> C; S = A+B+C;
    string s[N]; rep(i, N) cin >> s[i];
    
    string res = "Yes";
    vector<char> cres(N);
    if(S == 0){
        res = "No";
        
    }