signed main()
{
    //  以降 cin の入力元が 'input.txt' になる
    //std::ifstream in("input.txt");
    //std::cin.rdbuf(in.rdbuf());
    int M, S;
    cin >> N >> M >> S;
    S = min(S, 2500LL);
    REP(i, M)
    {
        int u, v, a, b;
        cin >> u >> v >> a >> b;
        u--;
        v--;
        REP(money, 2501)
        {
            if (money >= a) //残高があれば移動できる
            {
                edge e = {v, money - a, b}