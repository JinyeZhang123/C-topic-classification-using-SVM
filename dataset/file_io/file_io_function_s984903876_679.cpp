int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N;
    int grundy=0;
    
    while(N--){
        int a,b;cin>>a>>b;
        grundy^=f(a,b);
    }