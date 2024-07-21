int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll N,T;cin>>N>>T;
    T++;
    vector<ll> A;
    vector<pair<ll,ll>> B;
    
    for(int i=0;i<N;i++){
        ll a,b;cin>>a>>b;
        if(a==0) A.push_back(b);
        else B.push_back({a,b}