signed main()
{
    //  以降 cin の入力元が 'input.txt' になる
    //std::ifstream in("input.txt");
    //std::cin.rdbuf(in.rdbuf());
    int n;
    cin >> n;
    vi v;
    rep(i, 200010)
        rep(j, 2)
            rep(k, 3)
                dp[i][j][k] = -INF;
    rep(i, n)
    {
        int t;
        cin >> t;
        v.emplace_back(t);
    }