int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll N,K;cin>>N>>K;
    map<ll,ll> MA;
    
    vector<ll> d;
    for(ll i=1;i*i<=N;i++){
        if(N%i) continue;
        d.push_back(i);
        if(i*i!=N) d.push_back(N/i);
    }