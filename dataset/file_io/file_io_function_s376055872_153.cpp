int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll L;
    int N;cin>>L>>N;
    vector<ll> X(N+2),lsum(N+2),rsum(N+2);
    for(int i=0;i<N;i++) cin>>X[i+1];
    
    for(int i=1;i<=N;i++){
        lsum[i]=lsum[i-1]+2*X[i];
    }