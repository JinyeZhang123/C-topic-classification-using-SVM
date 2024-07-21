int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N;
    vector<ll> h(N+2,1),num(N+2,1),hi(N+2,1);
    vector<ll> SE;
    SE.push_back(1);
    for(int i=0;i<N;i++){
        cin>>h[i+1];
        SE.push_back(h[i+1]);
    }