int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    make();
    
    string S;cin>>S;
    int N=S.size();
    int cana=0,canb=0;
    dp[0][0]=1;
    if(S[0]=='0'){
        dp[1][1]=1;
        cana=2;
    }