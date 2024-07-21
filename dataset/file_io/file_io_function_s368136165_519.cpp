int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll N;cin>>N;
    make();
    
    ll sum=0;
    ll pas=0;
    
    for(ll i=1;i<=N-1;i++){
        sum+=(fac[i]*fac[N-1-i]%mod*comb(i-1,N-1-i)%mod-pas+mod)%mod*i%mod;
        sum%=mod;
        
        pas=fac[i]*fac[N-1-i]%mod*comb(i-1,N-1-i)%mod;
        
        //cout<<pas<<endl;
    }