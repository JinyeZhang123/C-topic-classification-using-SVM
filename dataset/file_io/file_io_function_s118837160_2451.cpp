void solve(){
    
    // remove the bottom 3 lines when you submit this code.
    std::ifstream in("sample.txt");
    std::cin.rdbuf(in.rdbuf());

    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n,T; cin >> n >> T;
    int t[n]; rep(i,n) cin >> t[i];
    
    int ans = 0;
    for (int i = 0; i < n-1; i++) {
        ans += min(T,t[i+1]-t[i]);
    }