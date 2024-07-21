int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    ll N, K; cin >> N >> K;
    vector<ll> AP, AM;
    rep(i, N) {ll A; cin >> A; if(A > 0) AP.push_back(A); else AM.push_back(-A);}