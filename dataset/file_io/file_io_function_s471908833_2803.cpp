void solve(){
    
    // remove the bottom 3 lines when you submit this code.
    std::ifstream in("sample.txt");
    std::cin.rdbuf(in.rdbuf());

    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        prime_factorize(i);
    }