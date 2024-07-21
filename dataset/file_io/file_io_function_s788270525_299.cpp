signed main()
{
    //  以降 cin の入力元が 'input.txt' になる
    //std::ifstream in("input.txt");
    //std::cin.rdbuf(in.rdbuf());
    string N;
    cin >> N;
    dp[0][0] = 0;
    dp[0][1] = 1;
    REP(i, N.size())
    {
        int c = N[i] - '0';
        dp[i + 1][0] = dp[i][0] + c;
        dp[i + 1][0] = min(dp[i + 1][0], dp[i][1] + 1 + c);
        dp[i + 1][0] = min(dp[i + 1][0], dp[i][1] + (10 - c));
        if (c == 9)
        {
            dp[i + 1][1] = dp[i][0] + 1;
            dp[i + 1][1] = min(dp[i + 1][1], dp[i][1] + 1 + 1);
            dp[i + 1][1] = min(dp[i + 1][1], dp[i][1]);
        }