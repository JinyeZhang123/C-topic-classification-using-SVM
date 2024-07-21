int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N;
    
    p[0]=-1;
    for(int i=2;i<=N;i++){
        p[i-1]=i/2-1;
    }