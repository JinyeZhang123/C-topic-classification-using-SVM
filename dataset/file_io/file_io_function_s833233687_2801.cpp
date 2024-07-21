int main() {
    #ifdef LOCAL
    ifstream in("../../Atcoder/input.txt");
    cin.rdbuf(in.rdbuf());
    #endif


    cin>>R>>C>>K;
    map<ll,ll> V;
    rep(i,K) {
        ll r,c,v;
        cin>>r>>c>>v;
        r--;c--;
        V[pos(r,c)] = v;
    }