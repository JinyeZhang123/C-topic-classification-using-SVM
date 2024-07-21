int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N,K;cin>>N>>K;
    string S;cin>>S;
    
    char ma='{';
    
    for(int i=0;i<N;i++){
        chmin(ma,S[i]);
    }