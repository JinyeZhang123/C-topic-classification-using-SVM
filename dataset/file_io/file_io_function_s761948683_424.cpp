int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N,K;cin>>N>>K;
    string S;cin>>S;
    
    if(S[0]=='A'){
        K--;
        S[0]='B';
    }