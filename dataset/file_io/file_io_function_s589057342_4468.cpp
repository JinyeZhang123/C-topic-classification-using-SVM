int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    int N;
    string S;
    cin >> N >> S;
    
    int res = 0;
    rep(i, N){
        vector<bool> cX(26, false), cY(26, false);
        rep(j, N){
            if(j < i) cX[ctoi(S[j])] = true;
            else cY[ctoi(S[j])] = true;
        }