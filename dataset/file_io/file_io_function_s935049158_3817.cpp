int main()
{

    // cin.tie(0);
    // ios::sync_with_stdio(false);

#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    string s, t;
    cin >> s >> t;
    int ls, lt, a;
    ls = s.length(), lt = t.length();
    VVI dp(ls + 1, VI(lt + 1, ls + lt));
    dp[0][0] = 0;
    rep(i, ls) dp[i + 1][0] = i + 1;
    rep(i, lt) dp[0][i + 1] = i + 1;

    rep(i, ls) rep(j, lt)
    {
        dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i + 1][j] + 1);
        dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j + 1] + 1);
        a = (s[i] == t[j] ? 0 : 1);
        dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + a);
    }