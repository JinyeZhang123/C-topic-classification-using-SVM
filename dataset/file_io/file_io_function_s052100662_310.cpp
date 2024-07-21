signed main()
{
    //  以降 cin の入力元が 'input.txt' になる
    //std::ifstream in("input.txt");
    //std::cin.rdbuf(in.rdbuf());
    int N;
    cin >> N;

    int AB[18][2];
    REP(i, N)
    cin >> AB[i][0];
    REP(i, N)
    cin >> AB[i][1];

    REP(i, (1 << N))
    {
        REP(j, 51)
        {
            dp[i][j] = INF;
        }