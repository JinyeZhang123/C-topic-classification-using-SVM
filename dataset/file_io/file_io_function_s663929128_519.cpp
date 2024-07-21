int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    sieve(1300002);
    
    while(1){
        int N;cin>>N;
        if(N==0) break;
        if(is_prime[N]){
            cout<<0<<endl;
            continue;
        }