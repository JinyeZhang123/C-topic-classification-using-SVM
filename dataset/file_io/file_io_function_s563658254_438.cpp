signed main()
{
    //  以降 cin の入力元が 'input.txt' になる
    // std::ifstream in("F/in/dense_01.txt");
    // std::cin.rdbuf(in.rdbuf());
    int N, M;
    cin >> N;
    REP(i, N - 1)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        d[a][b].emplace_back(i);
        d[b][a].emplace_back(i);
    }