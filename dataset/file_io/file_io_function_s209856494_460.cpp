int main() {
#if LOCAL&0
    std::ifstream in("./test/sample-1.in");
    //std::ifstream in("./input.txt");
    std::cin.rdbuf(in.rdbuf());
#else
    cin.tie(0);
    ios::sync_with_stdio(false);
#endif
    ll N; cin>>N;
    vector<ll> cn(N+1);
    vector<ll> cn2; cn2.reserve(N+1); //重複部分を消したもの
    cn2.push_back(1);
    FOR(i,1,N+1){
        ll c; cin>>c;
        cn.at(i)=c;
        if (cn.at(i-1)!=cn.at(i)) cn2.push_back(c);
    }