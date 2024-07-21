int main_() {
#if LOCAL&01
    std::ifstream in("./test/sample-1.in"); //input.txt
    std::cin.rdbuf(in.rdbuf());
#else
    cin.tie(0);
    ios::sync_with_stdio(false);
#endif
    ll N,Q; cin>>N>>Q;
    string s; cin>>s;
    vector<ll> num(N,1);
    unordered_map<char,vector<ll>> c_pos;    
    REP(i,s.size()){
        auto c=s[i];
        c_pos[c].push_back(i);
    }