int main() {
    
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
    
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int N; cin >> N;
    ll res = 0;
    map<ll, int> mp;
    rep(i, N) {
        ll A; cin >> A;
        res += mp[i-A];
        mp[i+A]++;
    }