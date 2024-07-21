int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    ll A,B;cin>>A>>B;
    
    ll sum=0;
    
    for(int i=61;i>=0;i--){
        if((A&(1LL<<i))==(B&(1LL<<i))){
            if(A&(1LL<<i)){
                A-=(1LL<<i);
                B-=(1LL<<i);
            }