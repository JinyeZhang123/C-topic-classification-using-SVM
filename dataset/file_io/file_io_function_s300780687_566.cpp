int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int M,N;cin>>M>>N;
        if(M+N==0) break;
        sieve(M,N);
        
        for(int i=M;;i++){
            if(is_prime[i]){
                cout<<i<<endl;
                break;
            }