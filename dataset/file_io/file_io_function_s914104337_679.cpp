int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    sieve(1000002);
    
    int N;cin>>N;
    for(int i=0;i<N;i++){
        int a;cin>>a;
        for(int j=1;j*j<=a;j++){
            if(a%j==0){
                G[j].push_back(a);
                if(j*j!=a) G[a/j].push_back(a);
            }