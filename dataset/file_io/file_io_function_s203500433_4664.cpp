int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N; cin >> N;
    ll A, B, C; cin >> A >> B >> C;
    string s[N]; rep(i, N) cin >> s[i];
    
    string res = "Yes";
    vector<char> cres(N);
    rep(i, N){
        if(s[i] == "AB"){
            if(A == 1 && B == 1 && C == 0 && i != N-1 && s[i] != s[i+1]){
                if(s[i+1] == "AC") {A++; B--; cres[i] = 'A';}