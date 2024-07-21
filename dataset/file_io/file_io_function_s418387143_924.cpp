int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    sieve(500001);
    
    for(int j=0;j<MAX;j+=2){
        ans[0][j]=prime[j];
        //cout<<ans[0][j]<<endl;
    }