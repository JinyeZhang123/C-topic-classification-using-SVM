int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int A,B,C,D;cin>>A>>B>>C>>D;
        if(A+B+C+D==0) break;
        int cnt=0;
        
        while(A<B*C){
            A+=D;
            cnt++;
        }