int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    make();
    int B,W;cin>>B>>W;
    ll S=0,T=0;
    
    for(int i=0;i<B+W;i++){
        cout<<(T+(2*mod-S-T+1)%mod*rui(2,mod-2)%mod)%mod<<endl;
        if(i-(B-1)<=W) S+=comb(i,B-1)*rui(2,mod-2)%mod*rui(rui(2,mod-2),i);
        if(i-(W-1)<=B) T+=comb(i,W-1)*rui(2,mod-2)%mod*rui(rui(2,mod-2),i);
        
        S%=mod;
        T%=mod;
    }