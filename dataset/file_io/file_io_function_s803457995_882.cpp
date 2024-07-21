int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    make();
    int N,M;cin>>N>>M;
    ll ans=0;
    for(int i=0;i<=N;i++){
        ll p=comb(N,i)*perm(M-i,N-i)%mod;
        if(i&1) ans-=p;
        else ans+=p;
        
        if(ans<mod) ans+=mod;
        if(ans>=mod) ans-=mod;
    }