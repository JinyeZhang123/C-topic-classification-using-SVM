int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N; string S; cin >> N >> S;
    vector<int> Sc(3, 0);
    rep(i, N){
        if(S[i] == 'R') Sc[0]++;
        else if(S[i] == 'G') Sc[1]++;
        else Sc[2]++;
    }