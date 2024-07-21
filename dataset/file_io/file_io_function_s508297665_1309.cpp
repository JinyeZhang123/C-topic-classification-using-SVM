int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    mt19937_64 rng(58);
    ll ha1=rng()%mod1,ha2=rng()%mod2;
    
    ru1[0]=1;
    ru2[0]=1;
    
    for(int i=1;i<MAX;i++){
        ru1[i]=ru1[i-1]*ha1%mod1;
        ru2[i]=ru2[i-1]*ha2%mod2;
    }