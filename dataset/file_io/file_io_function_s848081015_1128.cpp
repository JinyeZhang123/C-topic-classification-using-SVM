int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int M;cin>>N>>M;
    for(int i=0;i<M;i++){
        int a,b;cin>>a>>b;
        a--;b--;
        go(a,b);
    }