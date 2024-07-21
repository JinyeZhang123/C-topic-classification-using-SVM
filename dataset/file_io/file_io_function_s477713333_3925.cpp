int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    string S;
    cin >> S;
    vector<bool> NEWS(4, false);
    for(int i=0; i<(int)(S.size()); i++){
        if(S[i] == 'N') NEWS[0] = true;
        if(S[i] == 'W') NEWS[1] = true;
        if(S[i] == 'S') NEWS[2] = true;
        if(S[i] == 'E') NEWS[3] = true;
    }