void solve(){
    
    // remove the bottom 3 lines when you submit this code.
    std::ifstream in("sample.txt");
    std::cin.rdbuf(in.rdbuf());

    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int n; cin >> n;
    vector<int> A;
    
    A.push_back(0);
    rep(i,n){
        int a; cin >> a;
        A.push_back(a);
    }