int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N;
    
    string S;cin>>S;
    for(int i=0;i<N;i++){
        if(S[i]=='1') exist[i]=1;
    }