int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int T;
    cin >> T;
    while (T--){
        int N;
        cin >> N;

        vector<vector<int>> left(N+1);
        vector<vector<int>> right(N+1);
        ll ans = 0;
        REP(i, N){
            int k, l, r;
            cin >> k >> l >> r;
            if (l > r){
                left[k].emplace_back(l-r);
                ans += r;
            }