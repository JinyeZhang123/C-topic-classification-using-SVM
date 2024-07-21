int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N; cin >> N;
    vector<pair<string, int>> st(N);
    rep(i, N) {string s; int t; cin >> s >> t; st[i] = make_pair(s, t);}