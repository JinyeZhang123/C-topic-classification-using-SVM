int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N,M;cin>>N>>M;
    vector<ll> cost(N);
    for(int i=1;i<N;i++){
        cin>>cost[i];
        cost[i]+=cost[i-1];
    }