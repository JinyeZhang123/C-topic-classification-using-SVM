int main() {
#ifdef LOCAL
    ifstream in("../arg.txt"); cin.rdbuf(in.rdbuf());
#endif

    int T;
    cin >> T;
    REP(_, T){
        cin >> N >> A >> B >> C >> D;
        memo.clear();
        memo[1] = D;
        memo[0] = 0;
        ll ans = dfs(N);
        print(ans);
    }