int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N;cin>>N;
    map<P,int> MA;
    vector<vector<P>> S(N,vector<P>(4));
    for(int i=0;i<N;i++){
        int a,b,c,d;cin>>a>>b>>c>>d;
        S[i][0]=f(a,b,c,d);
        a=S[i][0].fi.fi;
        b=S[i][0].fi.se;
        c=S[i][0].se.fi;
        d=S[i][0].se.se;
        S[i][1]={{b,c}