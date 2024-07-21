int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout<<std::setprecision(10);
//    ifstream in("/Users/hamath/CLionProjects/atcoder/abc/082/1_17.txt");
//    cin.rdbuf(in.rdbuf());
    string s;
    ll x,y;
    cin>>s>>x>>y;
    Vec a;
    Vec b;
    s += 'T';
    ll cnt = 0;
    ll dir = 0;
    bool firstT = true;
    ll start=0;

    rep(i,s.length()){
        if(s[i]=='T'){
            if(dir%2==0){
                if(!firstT){
                    a.pb(cnt);
                }