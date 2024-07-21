int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll N;cin>>N;
    
    if(N<=100){
        cout<<2*N<<endl;
        for(int i=0;i<N;i++) cout<<N-i<<" ";
        for(int i=0;i<N;i++) cout<<i+1<<" ";
        cout<<endl;
        return 0;
    }