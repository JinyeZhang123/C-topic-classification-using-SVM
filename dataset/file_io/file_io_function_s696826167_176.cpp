int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N;
    string S;cin>>S;
    
    for(ll i=1;i<=2*N;i++){
        if(2*N%i!=0||(2*N/i)%2==0) continue;
        
        ll sum=0;
        for(int j=0;j<i/2;j++){
            sum*=2;
            if(S[j]=='1') sum++;
            
            sum%=mod;
        }