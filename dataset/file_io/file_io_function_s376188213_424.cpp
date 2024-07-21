int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N,A,B;cin>>N>>A>>B;
    B--;
    int ans=0;
    for(int i=0;i<N;i++){
        int a;cin>>a;
        if(a<A||B<a) ans++;
    }